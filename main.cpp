#include <iostream>

void main()
{

	//creating and assiging a variable
	

	int biglez = 4;
	int bleepers = 2;
	int snoozle = 20;

	float qwe = 23.76f;
	float asd = 65.34f;
	float zxc = 13.23f;

	float inpoot = 1;

	int age = 22;
	
	goto jmp1;
	jmp2:;

	std::cout << age << std::endl;
	age = 234;
	std::cout << age << std::endl;
	age = 100;
	std::cout << age << std::endl;




	// Using arithmatic operators on integer variables


	std::cout << biglez << std::endl;
	std::cout << bleepers << std::endl;
	std::cout << snoozle << std::endl;
	snoozle = (bleepers + biglez);
	std::cout << snoozle << std::endl;

	// thought I stuffed up below but was using 5.5 and 1.3 which rounds to 6 when you cut off the decimal

	biglez = 7.5f;
	bleepers = 21.3f;
	snoozle = (bleepers + biglez);
	std::cout << snoozle << std::endl;


	// Using arithmetic operators on Floating Point obnoVjTW2Yz6Tc9AcfrIl8woaQgBLh5wE2uRcMVFHhTtZJrpXg7TCRusIssDMke0WIpE



	std::cout << asd << std::endl;
	std::cout << qwe << std::endl;
	std::cout << zxc << std::endl;
	zxc = (asd + qwe);
	std::cout << zxc << std::endl;

	qwe = 4;
	asd = 999;
	zxc = (asd + qwe);
	std::cout << zxc << std::endl;

	//Storing User Input in Integer Variables

	std::cout << "Enter a number please" << std::endl;
	std::cin >> inpoot;
	if (std::cin.fail()) {
		std::cout << "Psych that's the wrong number / that's text!!" << std::endl;
		inpoot = 23;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}

	std::cout << "I think you typed " << inpoot << std::endl;

//	Excercise 1 guess what X outputs

	// A) = 14
	int numberA = 5;
	numberA = 9;
	numberA = 11;
	numberA = 14;
	std::cout << "A) " << numberA << std::endl;
	
	// B) = 9
	int numberB = 10;
	numberB = 9;
	int thingB = 55;
	thingB = 22;
	std::cout << "B) " << numberB << std::endl;

	// C) = 21
	int numberC = 3;
	numberC = 7;
	numberC = 1;
	int somethingC = 23;
	somethingC = 21;
	numberC = somethingC;
	std::cout << "C) " << numberC << std::endl;

	// D) = 3
	int numberD = 1;
	int somethingD = 3;
	numberD = somethingD;
	std::cout << "D) " << somethingD << std::endl;

	// E) = 6 changed x to j to stop reinintialzing error later on
	int j = 13;
	j = j / 2;
	std::cout << "E) " << j << std::endl;

	// F) = 6.5 changed like above
	float o = 13;
	o = o / 2;
	std::cout << "F)" << o << std::endl;

	//Excersise 2 C to f
	// Celsius to Fahrenheit)
	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f; // Modify this variable below.

	std::cout << "Nostromo's Temperature conversion tool" << std::endl;
	std::cout << "Enter Temperature in Celcius to convert to Fahrenheit" << std::endl;
	std::cin >> degCelsius;
	if (std::cin.fail()) {
		std::cout << "Thats text so lets see what 666C is in F" << std::endl;
		inpoot = 666;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	// F = 1.8 X C + 32 Form for conversion
	degFahrenheit = 1.8 * degCelsius + 32;
	

								// <Your work goes here>
	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	// Exercise 3 Area of a Rectangle
	// Area of a Rectangle)
	float rectWidth = 0.0f; // Modify this variable below.
	float rectHeight = 0.0f; // Modify this variable below.
	float rectArea = 0.0f; // Modify this variable below.
						  
	std::cout << "Nostromo's Area Rectangular area tool thingo" << std::endl;
	std::cout << "Enter height and width when prompted to find out the area of your rectangle" << std::endl;
	std::cout << "Enter height of your rectangle" << std::endl;

	//width enter and check
	std::cin >> rectWidth;
	if (std::cin.fail()) {
		std::cout << "13 is unlucky and you must be unlucky or an idiot to have not entered a number so lets use 13" << std::endl;
		rectWidth = 13;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	//height enter and check
	std::cout << "Enter height of your rectangle" << std::endl;
	std::cin >> rectHeight;
	if (std::cin.fail()) {
		std::cout << "Lets just randomly use 420 instead of what ever garbled nonsense you entered" << std::endl;
		rectHeight = 420;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
						   
	//then we LxW=Area
	rectArea = rectHeight * rectWidth;

						   // <Your work goes here>
	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;



	//Exercise 4 Average of Five
	// Average of Five)
	float a, b, c, d, e; // Modify these variables below.
	float avg; // Modify this variable below.
	avg = a = b = c = d = e = 0.0f; // Initialize all to zero.

	std::cout << "enter 5 numbers" << std::endl;
	std::cout << "number 1" << std::endl;
	std::cin >> a;
	if (std::cin.fail()) {
		std::cout << "WRONG changing the text colour as punnishment and setting it to 2 instead" << std::endl;
		system("color f2");
		a = 2;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	std::cout << "number 2" << std::endl;
	std::cin >> b;
	if (std::cin.fail()) {
		std::cout << "*insert joke about failing text input 7" << std::endl;
		b = 7;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	std::cout << "number 3" << std::endl;
	std::cin >> c;
	if (std::cin.fail()) {
		std::cout << "this what I get for thinking you could follow simple instructions had a 1/10 chance of working so lets use 1 instead" << std::endl;
		c = 1;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	std::cout << "number 4" << std::endl;
	std::cin >> d;
	if (std::cin.fail()) {
		std::cout << "see I don't think I stuff up my maths on my end it was 932 having a hard time telling whats on your end" << std::endl;
		d = 932;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	std::cout << "Last one number 5" << std::endl;
	std::cin >> e;
	if (std::cin.fail()) {
		std::cout << "BORED and you're wrong it 4" << std::endl;
		e = 4;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}

	//5 numbers so average is sum / 5
	avg = (a + b + c + d + e) / 5;
									// <Your work goes here>


	std::cout << "Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;


	//Excersise 5 Sumber nwap
	// Number Swap)
	int x = 13;
	int y = 24;
	// <Your work goes here>
	// I could just make variable z and then temp store one in there to solve the swapping around whiping itself I wanted to trysomething else
	std::cout << "value of x" << std::endl;
	std::cin >> x;
	if (std::cin.fail()) {
		std::cout << "Ok you crossed me now gonna have to give you 10 sedonds to run" << std::endl;
		x = 10;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	std::cout << "value of y" << std::endl;
	std::cin >> y;
	if (std::cin.fail()) {
		std::cout << "y u not type right M8 " << std::endl;
		y = 8;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}

	std::cout << "Number Swap)" << std::endl;
	std::cout << "we swapping x " << x << " and y " << y << " lets see what happens" << std::endl;
		x = x + y; // add them ie x = 1 y = 2 --------- 1 + 2 = 3 ------ with x = 3 y =2
		y = x - y; // now they are added remove one from the other ie 3 - 2 = 1 -------  x = 3 y =1
		x = x - y; // then we can get x again ie 3 - 1 = 2     woopee x is now 2 and y = 1


	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;

	//ignore the code to jump around
	goto jmp3;
		jmp1:;
	//code between these jumps


	//Excersise 6 expand age bit
	// Fun Facts for Your Age)
	// <Your work can go here.>
	// <You must add more lines to output to the terminal>
		
	    int lifeSec = 0;
		int lifeMin = 0;
		int lifeSun = 0;

		std::cout << "How old are you?" << std::endl;
		std::cin >> age;
		if (std::cin.fail()) {
			std::cout << "aw too young to type are you guess you're 8 " << std::endl;
			age = 8;
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
		}

		lifeSec = age * 31556952;
		lifeMin = age * float(525949.2);
		lifeSun = float(4603000000 / age); //creative uses of float to stop rounding looking obvious 64327272727 etc
		std::cout << "Howdy! You are " << age << " years old!" << std::endl;
		std::cout << "You are " << lifeMin << " Minutes old!" << std::endl;
		std::cout << "And " << lifeSec << " Seconds old!" << std::endl;
		std::cout << "you have been alive for 1/ " << lifeSun << "th of the time that the sun has existed!" << std::endl;
		



	//not below here
		goto jmp2;
	jmp3:;

		//except when you are on
		// Challenge 1 
		// Conforming to Conventions)
		//int age;   age     commenting out to stop it conflicting
		int bulletCount; //bullet_count
		float dogYears; //dog_years
		int qty; // qty
		float shieldValue; // shield_value
		float defenseMatrixCooldown; // defense_matrix_cooldown
		int redArmorValue; // red_armor_value
		float redArmorRatio; // red_armor_ratio
		int happiness; // happiness
		int gandhiAggression; // gandhi_aggression

		//Challenge 2
		// The Right Tool for the Job)
		int num; // integer
		float num2; // single precision floating point
		short num3; //smaller int
		long num4; // longer int
		long long num5; // longer long
		double num6; // twice as floaty as float
		bool num7; //true or false
		char num8; // character as in letter
		long double num9; //*sigh* longer double
		short int num10; // int thats limited to 16 and not 32 bits

		//Challenge 3
		//3. Number Swap(Difficulty Up)
		//	Earlier, you added functionality to your program where you instantiated two integer variables and
		//swapped their values before they were printed to the terminal.
		//Revise your implementation of the previously given scenario to utilize no more than two variables as
		//well as only using the arithmetic and assignment operators.

		//LOL I did this to begin with gg ez

		system("pause");
	
}
