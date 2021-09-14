C++ Classes and Objects-:
	The main purpose of C++ programming is to add "object orientation" to the C programming language and "classes" are the central feature of C++ that supports
       	object-oriented	programming and are often called "user-defined types".The main purpose of C++ programming is to add object orientation to the C programming language 
	and classes are the central feature of C++ that supports object-oriented programming and are often called user-defined types.

	A class is used to specify the form of an object and it combines "data representation and methods" for manipulating that data into one neat package. The data and
        functions  within a class are called members of the class.

C++ Class Definitions-:
	When you define a class, you define a blueprint or user defined data type. This doesn't actually define any data, but it does define what the class name means, that 
	is, what an object of the class will consist of and what operations can be performed on such an object.
	
	A class definition starts with the keyword class followed by the class name;and the class body, enclosed by a pair of curly braces. A class definition must be followed
       	either by a semicolon or a list of declarations. For example,we defined the Box data type using the keyword class as follows −
	
		<class keyword > <class_name> {
   				public,private,protected; //Access Specifier
				double,singed,unsigned;   //data Member  ; 
      				function(),fabbonoci();   //Member Function();
			};

		class Box {
      				double length;   // Length of a box
      				double breadth;  // Breadth of a box
      				double height;   // Height of a box
			  };
Define C++ Objects-:
	A class provides the blueprints for objects, so basically an object is created from a class. We declare objects of a class with exactly the same sort of declaration
       	that we declare variables of basic types. Following statements declare two objects of class Box in given file :
         main.cpp
	             #include<iostream>
	              using namespace std;
		      class Box {
  			 public:
      				double length;   // Length of a box
      				double breadth;  // Breadth of a box
      				double height;   // Height of a box
				};
		    int main()
			{
			  Box Box1;
			  Box Box2;
			  Box1.length  = 5.0;
			  Box1.breadth = 6.0;
			  Box1.height  = 7.0;
			  return 0 ;			
			}            
Access Specifier-:
	The Access Specifier "public" determines the access attributes of the members of the class that follows it. A public member can be accessed from outside the class 
	anywhere within the scope of the class object. You can also specify the members of a class as private or protected which provide access restriction outside of class.
	There are mainly three specifier:
			1. Public
			2. Private              //Access Specifier
			3. Protected
C++ Inheritance-:
================
	When creating a class, instead of writing completely new data members and member functions, the programmer can designate that the new class should inherit the members 
	of an existing class. This existing class is called the base class, and the new class is referred to as the derived class.

Base and Derived Classes-:
	A class can be :derived from more than one classes, which means it can inherit data and functions from multiple base classes. To define a derived class, we use a class
       	derivation list to specify the base class(es). A class derivation list names one or more base classes and has the form −
	
					[<class derived-class>: <access-specifier> <base-class>]
	Where access-specifier is one of public, protected, or private, and base-class is the name of a previously defined class. If the access-specifier is not used, then it
	is private by default.


Access Control and Inheritance-:
	A derived class can access all the non-private members of its base class. Thus base-class members that should not be accessible to the member functions of derived 
	classes should be declared private in the base class.We can summarize the different access types according to - who can access them in the following way
	
		Access			public			protected		private
		-------------------------------------------------------------------------------
		Same class		yes			yes			 yes
		Derived classes		yes			yes			 no
		Outside classes		yes			 no			 no


A derived class inherits all base class methods with the following exceptions :−
		1.Constructors, destructors and copy constructors of the base class.
		2.Overloaded operators of the base class.
		3.The friend functions of the base class.



Type of Access Specifier in Inheritance/Modes of Inheritance:-
	When deriving a class from a base class, the base class may be inherited through public, protected or private inheritance. The type of inheritance is specified
	by the access-specifier as explained above.We hardly use protected or private inheritance, but public inheritance is commonly used. While using different type of
       	inheritance, following rules are applied −

	1. Public Inheritance :− 
		When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base
	        class become protected members of the derived class. A base class's private members are never accessible directly from a derived class, but can be accessed
	       	through calls to the public and protected members of the base class.
	2. Protected Inheritance: − 
		When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.
	3. Private Inheritance :− 
		When deriving from a private base class, public and protected members of the base class become private members of the derived class.

Types of Inheritance in C++ -:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	In C++, we have 5 different types of Inheritance.That is given bellow:,
		1. Single Inheritance
		2. Multiple Inheritance
		3. Hierarchical Inheritance
		4. Multilevel Inheritance
		5. Hybrid Inheritance (also known as Virtual Inheritance)

1.Single Inheritance :
		In single inheritance, a class(Base class) is allowed to inherit from only one class(Derived Class). i.e. one sub class is inherited by one base class only.
		                          [A]-------------------------------->[B]
                                       {Base Class}                         {Derived Class}
		 
		Syntax:
			class <subclass_name> : <access_mode> <base_class>
			{
 				 //body of subclass
			};	

2.Multiple Inheritance:
		Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes. i.e one sub class is inherited from more than one base classes
					[A0]------------------------------------>
		   {Base Classes}       [A1]------------------------------------>[B]{Derived Class}
					[A2]------------------------------------>

		Syntax:
		        class <subclass_name> : <access_mode>  <base_class1>, <access_mode> <base_class2>, ....
			{
  				//body of subclass
			};
                       class derived-class: access baseA, access baseB....
3.Multilevel Inheritance: 
		In this type of inheritance, a derived class is created from another derived class.
		                         [A0]---------------->[A1]--------------->[B]
                                       {Base Class0}        {Base Class1}       {Derived Class}
4.Hierarchical Inheritance: 
		In this type of inheritance, more than one sub class is inherited from a single base class. i.e. more than one derived class is created from a single base class.
							[A]   {Base Class }
                                       |
							 		   |
                          _____________V_________
					     |			             |
		                 V			 			 V
					    [B]                     [C]{Sub derived Class 01}
                         |                         |
				  _______V______          ________V_______
				 |	       	  |          |             	  |
				 |	          |          |                |
                 V            V          V                V
			        [D]	         [E ]        [F]       [G]{Sub derived Class 02}

		
5.Hybrid (Virtual) Inheritance: 
		Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance.
			
		
Importance of Inheritance-:
		 1.The reusablity is a very important features of the OOPs.
		 2.In the C++ we can reuse a class  and properties,additional feature to it.
	     3.In C++ reusing class and additional feature save time and money in the code development.
		 4.Reusing already tested and debugged class wil save a lot of effort of developing and debugging the same thing again.
		 5.The concept of Reusability in C++  is supported by using the inheritance.
		 6.We can reuse the properties of an existing class by inherititing from it
		 7.The existing class is called the Base Class and the new class which is inherited is called  derived class.
		 8.There are many different type of inheritance in C++ .		 







	

