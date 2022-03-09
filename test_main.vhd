--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:46:30 12/24/2020
-- Design Name:   
-- Module Name:   D:/Projects/ProjektMateuszSiebiatynski/test_main.vhd
-- Project Name:  ProjektMateuszSiebiatynski
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: main
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
 
ENTITY test_main IS
END test_main;
 
ARCHITECTURE arch OF test_main IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         clk : IN  std_logic;
         START : IN  std_logic;
         STOP : IN  std_logic;
         C1 : IN  std_logic;
         C2 : IN  std_logic;
         S1 : OUT  std_logic;
         P1 : OUT  std_logic;
         M1 : OUT  std_logic_vector(1 downto 0);
         M2 : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal START : std_logic := '0';
   signal STOP : std_logic := '0';
   signal C1 : std_logic := '0';
   signal C2 : std_logic := '0';

 	--Outputs
   signal S1 : std_logic;
   signal P1 : std_logic;
   signal M1 : std_logic_vector(1 downto 0);
   signal M2 : std_logic_vector(1 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          clk => clk,
          START => START,
          STOP => STOP,
          C1 => C1,
          C2 => C2,
          S1 => S1,
          P1 => P1,
          M1 => M1,
          M2 => M2
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
  stim_proc: process
  begin
		START <= '0';
		wait for 100 us;	
		START <= '1';
		wait for 20 us;
		START <= '0';
		wait for 180 us;
		C1 <='1';
		
		wait for 300 us;
		STOP <= '1';
   	wait for 10 us;
		STOP <= '0';
		wait for 100 us;	
		START <= '1';
		wait for 20 us;
		START <= '0';
		wait for 100 us;
		C2 <='1';
		wait;
  end process;

END;
