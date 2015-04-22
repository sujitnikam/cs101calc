									2015-CS101		
GROUP NUMBER-315


NAMES			ROLL NUMBER

1.SUJIT NIKAM		140040021  (LEADER)
2.ROSHAN TATHED		140040020
3.KSHITIJ VIJAYVARGIA	140040041
4.RAHUL KUNDU		140040070				    						
								    ADVANCED SCIENTIFIC CALCULATOR
								    		WITH               
								          GRAPH PLOTTER    
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
YOUTUBE LINK OF PROJECT VIDEO: https://www.youtube.com/watch?v=8j-mqzb5eMs
YOUTUBE LINK FOR SOFTWARE DOWNLOAD : https://youtu.be/pid6MZg3KTo


INSTRUCTIONS TO SET UP THE SOFTWARE:

1.Software for the calculator is quite simple and requires the user to have ubuntu installed in the machine.Along with ubuntu(14.02 LTS would be preferred) 
you need to have code blocks 13.12 installed. Simplecpp library should also be installed.

Instructions for installing Ubuntu and more...

1) Get hold of a USB stick to boot Ubuntu.
2) Booting from the USB

   a) For WINDOWS 7: 
	i) Additional configuration is required to load from an USB instead of a 
	ii) So, Restart your computer. 
	iii) As it starts quickly press F2/F12(mostly will be displayed at the time of 
	iv) On the BIOS setup screen, choose the option called "Boot order," or 
	v) Select all the options containing �USB� and move them to the top of 
	vi) Save the setting and exit the BIOS settings.
	vii)Restart the computer with the USB drive attached.

   b) For Windows 8:
	i) It�s easier than Windows 7. 
	ii) Open your Windows 8. Search for �Advanced Startup Options�.
	iii) (not sure but I guess here or in a later step you�ll have to select that 
	iv) In the options select �USE A DEVICE� (Note: At this time the USB must 
	v) From the list pick your USB(It�s usually the last on the list)
3) Now a purple screen will appear the GNU grub. Select the install Ubuntu (alondside windows) option.
4) These intermediate steps I�m not sure about. Just say ok to whatever it asks for It�ll be fine. For the keyboard select English (US). Works for all systems I�ve
tried on. At some point in between you�ll have an option to choose the amount of space to give to ubuntu. That�s your call. I would suggest giving at 
least say 50GiBs. You�ll have to save the changes made to disk or something like that and then wait for it to get installed. After it shutdowns you can 
remove the USB but not before that.
5) Mostly the computer will restart and again a purple screen.By default Ubuntu is selected. 

	Let Ubuntu boot. Now for a few installs:

		a) Open the terminal : Ctlr+Alt+T(You could also you search(Windows button-
called the super button in Ubuntu)

		b) Type: sudo apt-get update; sudo apt-get upgrade;

		c) sudo apt-get install g++

		d) sudo apt-get install libx11-dev

		e) sudo apt-get install codeblocks

		f) sudo apt-get update; sudo apt-get upgrade;

		g) Open the Mozilla Browser and download and install Google 

		Chrome like you would do for Windows(Pick x32 or x64 depending
on your system and Debian(Ubuntu))

		h) Open the website 

		http://www.cse.iitb.ac.in/~ranade/simplecpp/simplecpp.tar

		i) Extract it to our home folder

		j) Again open the terminal and type : cd simplecpp

		k) Then type sh configure.sh

		l) Check for any errors(if not proceed further)


	Now to setup code::blocks for simplecpp

		1) Open Code::Blocks

		2) Go to settings-Compiler

		3) Then to ToolChain Executables

		4) Change the following: 

		All the changes must be made by clicking on the �...� buttons and navigating to the simplec/pp directory where s++ and makes++ is 
		located. Libsprite.a can be found inside the lib file(/home/user/simplecpp/lib).

		5) Then in the Additional Paths add the /home/<user>/simplecpp/

		6) Then go to the Search Directories tab. In compilers add /home/<user>/simplecpp and in linkers add /home/<user>/simplecpp/lib

		7) In linker settings add /home/<user>/simplecpp/lib/libsprite.a and in other linker options type in �-L /usr/X11R6/lib -lX11� without the quotes.

Now try out a sample program:

#include<simplecpp>

main_program

{

 initCanvas();

 Text tp(250,250,"Great!! IT WORKS!!");

 wait(-1);

}

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Once you are done with this hectic procedure of installing simplecpp and all you can proceed to run the software.
(NOTE: Along with the .cpp file, the folder containing the software should have all the header files included.)


