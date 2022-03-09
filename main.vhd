----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Mateusz Siebiatyñski
-- 
-- Create Date:    19:21:17 12/11/2020 
-- Design Name: 
-- Module Name:    main - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;--pozwala na dodawanie znakiem plusa


entity main is
	port(	
		clk: in std_logic;				--zegar
		START: in std_logic;				
		STOP: in std_logic;
		C1: in std_logic;	      		--czujnik zbli¿eniowy
		C2: in std_logic;       		--czujnik metali
		S1: out std_logic :='0';		--silownik pneumatyczny
		P1: out std_logic :='0';   	--przyssawka
	 	M1: out std_logic_vector (1 downto 0) :="00";
		M2: out std_logic_vector (1 downto 0) :="00"	
		);
end main;
--przyciski START, STOP monostabilne normalnie otwarty
--bit 1 w silnikach M1 i M2 dpowiada za w³¹czenie obrotów (1- ON, 0- OFF)
--bit 0 w silnikach M1 i M2 odpowiada za kierunek obrotów (1- CCW, 0- CW)
-- CW przybli¿a sanki do silnika(bo zwykla sruba)

architecture arch of main is

type state_type is (ST0, ST1, ST2, ST3, ST4, ST5, ST6, ST7, ST8, ST9, STA, STB);

signal curr_state: state_type := ST0;
signal next_state: state_type;
signal work: std_logic := '0';
signal material: std_logic := '1';
signal factor: std_logic_vector (19 downto 0) := x"00001";

begin

	seq: process(clk)
	begin
		if (clk = '1' or clk = '0') and clk'event then
			curr_state <= next_state;
		end if;
		
	end process seq;
		
	
	comb: process(clk)	
	begin
		case curr_state is
			when ST0 =>
				if (factor = x"0000B") then
					next_state <= ST1;
				else
					next_state <= ST0;
				end if;
			when ST1 =>
				if (factor = x"000A0") then
					next_state <= ST2;
				else
					next_state <= ST1;
				end if;
			when ST2 =>
				if (factor = x"000D1") then
					next_state <= ST3;
				else
					next_state <= ST2;
				end if;
			when ST3 =>
				if (factor = x"00104") then
					next_state <= ST4;
				else
					next_state <= ST3;
				end if;
			when ST4 =>
				if (factor = x"00136") then
					next_state <= ST5;
				else
					next_state <= ST4;
				end if;
			when ST5 =>
				if (factor = x"00230") then
					next_state <= ST6;
				else
					next_state <= ST5;
				end if;
			when ST6 =>
				if (factor = x"004EC") then
					next_state <= ST7;
				else
					next_state <= ST6;
				end if;
			when ST7 =>
				if (factor = x"00582") then
					next_state <= ST8;
				else
					next_state <= ST7;
				end if;
			when ST8 =>
				if (factor = x"005B4") then
					next_state <= ST9;
				else
					next_state <= ST8;
				end if;
			when ST9 =>
				if (factor = x"005E6") then
					next_state <= STA;
				else
					next_state <= ST9;
				end if;
			when STA =>
				if (factor = x"00618") then
					next_state <= STB;
				else
					next_state <= STA;
				end if;
			when STB =>
				if (factor = x"0064A") then
					next_state <= ST0;
				else
					next_state <= STB;
				end if;
		end case;
	end process comb;
		
	
	process(clk)
	begin
		if clk'event and clk = '1' then
			if START = '1' then
				work <= '1';
			elsif STOP = '1' then
				work <= '0';
			end if;
		
			if clk'event and clk = '1' and work = '1' then
				if (factor = x"0064A") then
					factor <= x"00001";
				else
					factor <= factor + '1';
				end if;
			end if;

			if work = '1' then
				case curr_state is
					when ST0 =>				--oczekiwanie
						M1 <= "00";
						M2 <= "00";
						S1 <= '0';
						P1 <= '0';
						if C1 = '1' and C2 = '1' then 
							factor <= x"0000B";
							material <= '1';
						elsif C1 = '1' and C2 = '0' then
							factor <= x"0000B";
							material <= '0';
						else
							factor <= x"00001";
						end if;
					when ST1 =>				--dojazd ramieniem
						M1 <= "00";
						M2 <= "10";				--ON CW
						S1 <= '0';
						P1 <= '0';
					when ST2 =>				--dojazd przyssawka
						M1 <= "00";
						M2 <= "01";				--OFF CWW
						S1 <= '1';				--PUSH ON
						P1 <= '0';
					when ST3 =>				--zasssanie
						M1 <= "00";
						M2 <= "01";
						S1 <= '1';
						P1 <= '1';				--pobranie
					when ST4 =>				--odjazd przyssawki
						M1 <= "00";
						M2 <= "01";
						S1 <= '0';				--PUSH OFF
						P1 <= '1';
					when ST5 =>				--dojazd ramion na malowanie
						M1 <= "10";				--ON CW
						M2 <= "11";				--ON CCW
						S1 <= '0';
						P1 <= '1';
					when ST6 =>				--malowanie
						M1 <= "01";				-- OFF CCW
						M2 <= "00";				-- OFF CW
						P1 <= '1';
						if material = '1' then		--metalowy
							if factor = x"00294" then
								S1 <= '1';						--dol
							elsif factor = x"002F8" then
								S1 <= '0';						--gora
							elsif factor = x"0035C" then
								S1 <= '1';						--dol
							elsif factor = x"003C0" then
								S1 <= '0';						--gora
							elsif factor = x"00424" then
								S1 <= '1';						--dol
							elsif factor = x"00488" then
								S1 <= '0';						--gora
							end if;
						else								--niemetalowy
							if factor = x"00294" then
								S1 <= '1';						--dol
							elsif factor = x"0035C" then
								S1 <= '0';						--gora
							elsif factor = x"003C0" then
								S1 <= '1';						--dol
							elsif factor = x"00488" then
								S1 <= '0';						--gora
							end if;
						end if;
					when ST7 =>				--dojazd ramion do pkt odkladania
						M1 <= "01";
						M2 <= "10";				--ON CW
						S1 <= '0';
						P1 <= '1';
					when ST8 =>				--dojazd przyssawki
						M1 <= "01";
						M2 <= "01";				--OFF CCW
						S1 <= '1';				--PUSH ON
						P1 <= '1';
					when ST9 =>				--opuszczenie
						M1 <= "01";
						M2 <= "01";				
						S1 <= '1';	
						P1 <= '0';				--odlozenie
					when STA =>				--odjazd przyssawki
						M1 <= "01";
						M2 <= "01";				
						S1 <= '0';				--PUSH OFF
						P1 <= '0';
					when STB =>				--powrot ramion
						M1 <= "11";				--ON CCW
						M2 <= "11";				--ON CCW		
						S1 <= '0';				
						P1 <= '0';						
				end case;	
			else
				M1 <= "00";
				M2 <= "00";
				S1 <= '0';
			end if;
		end if;
	end process;

end arch;