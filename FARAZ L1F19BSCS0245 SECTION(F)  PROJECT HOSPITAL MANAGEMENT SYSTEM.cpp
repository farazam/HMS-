#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	int month, date, year;
	/*int variable = 1,*//* variable1 = 1;*/
	int n; int a;
	int data, search, num, num1, s, edit, ed, list;
	int number, age1;
	int finO[1000], finE[1000];
	int sizeO = 0, sizeE = 0;
	char sex1, character;
	int dis1, room1, bill1, rec1;
	char  sexO[1000], sexE[1000];
	int disO[1000], disE[1000];
	int ageO[1000], ageE[1000];
	int roomO[1000], roomE[1000], billO[1000], billE[1000];
	int recO[1000], recE[1000], idO[1000], idE[1000];
	/*srand(time(NULL));*/
	int del, del1, delidO, delidE;
	cout << "                          PROJECT PRESENTATION               " << endl << endl;
	cout << "         -----------------------------------------------------------------" << endl << endl<<endl;
	cout << "           PRESENTED BY FARAZ  " << endl<<endl;
	cout << "             SECTION:(F)" << endl<<endl;
	cout << "               REG NO: L1F19BSCS0245" << endl<<endl<<endl;
	cout << "             --------------------------------------------------------"; cout << endl << endl;
	cout << "                  This iS UCP OFFICAL HOSPITAL MANAGEMENT SYSTEM"; cout << endl << endl;
	cout << "             ---------------------------------------------------------" << endl << endl;
	cout << "PROGRAM DATE VALIDATION:"; cout << endl<<endl;
	cout << "FROM 2020 to 3000" << endl<<endl;
	cout << "ASK THE PROGRAMMER TO UPDATE YOUR PROGRAM AFTER VALIDATION" << endl << endl;
	cout << " PLEASE Enter current Correct DATE"<< endl<<endl;
	cout << "Format WIll BE: (D/M/Y)" << endl<< endl;
	cout << "Enter date:";
	cin >> date; cout << endl;
	while (date < 1 || date > 31)
	{
		cout << "The DATE IS NOT VALID " << endl;
		cout << "PLEASE ENTER DATE AGAIN" << endl;
		cout << "Enter date:";
		cin >> date;
	}
	cout << "Enter month:";
	cin >> month; cout << endl;
	while (month < 1 || month > 12)
	{
		cout << "MONTH IS NOT VALID" << endl;
		cout << "PLEASE ENTER CORRECT MONTH" << endl;
		cout << "Enter month Again:";
		cin >> month;cout << endl<<endl;
	}
	cout << "Enter year:"; cin >> year; cout << endl;
	while (year < 2020 || year > 3000)
	{
		cout << "YEAR IS NOT VALID"; cout<< endl;
		cout << "PLEASE ENTER CORRECT YEAR:" << endl;
		cout << "Enter year:"; cin >> year; cout << endl;
	}
	cout << "The current DAte is:";
	cout << date; cout << "/"; cout << month; cout << "/"; cout << year; cout << endl << endl << endl;
	int i = 0, j = 0; int size = 0, size1 = 0;
	do
	{
		a = 1;
		cout << "Choose the option What to do:"; cout << endl << endl;
		cout << "1.Add patient record"; cout << endl;
		cout << "2.Search or edit PAtient Record"; cout << endl;
		cout << "3.List of record of PAtients"; cout << endl;
		cout << "4.Delete the Patient Record"; cout << endl;
		cout << "5.Exit the program"; cout << endl;
		cin >> n; cout << endl << endl;
		if (n == 1)
		{
			cout << "Enter '1' To ADD OPD PATEINT RECORD"; cout << " OR"; cout << endl << endl;
			cout << "Enter -1 TO ADD EMERGENCY PATIENT RECORD"; cout << endl << endl;
			cin >> data; cout << endl;
			switch (data)
			{
			case 1:
			{
				while (a != 0)
				{
					cout << "THIS IS OPD SREVICE"; cout << endl;
					cout << "---------------------------------------------"; cout << endl;
					/*cout << "Enter PAtient Name:"; cin >> name; */
					/* idO[i] = variable;*/
					cout << "PAtient iD:";
					idO[i] = i + 1;
					cout << idO[i]; cout << endl;
					cout << "ENter Patient AGe:";
					cin >> ageO[i];
					cout << "ENter PAtient GEnder:";
					cin >> sexO[i];
					while (sexO[i] != 'm' && sexO[i] != 'M' && sexO[i] != 'F' && sexO[i] != 'f')
					{
						cout << "PLease enter correct gender again:"; cin >> sexO[i];
					}
					cout << "ENter Disease ID:";
					cin >> disO[i];
					cout << "THe room of yours:"; cin >> roomO[i];

					for (int counter = 0; counter < i; counter++)
					{
						while (roomO[i] == roomO[counter])

						{
							cout << "this is occupied:";
							cout << "Enter room again:";
							cin >> roomO[i];
						}
					}
					/*roomO[i] = rand() % 100;
					cout << roomO[i]; cout << endl;
					while (roomO[i] == 0)
					{
					cout << "The room of yours:";
					cout << roomO[i]; cout << endl;

					}*/
					/* cout << "Enter the Bill of the Patient:";
					 cin >> billO[i];
					 cout << "Recived Amount:";
					 cin >> recO[i];
					 cout << "Returned Amount:";
					 cout << recO[i] - billO[i]; cout << endl;*/
					i++;
					size++;
					/* variable++;*/
					cout << "Press 0 for main menu && 1 for TO ADD:";
					cin >> a;
					while (a < 0 || a>1)
					{
						cout << "Now Press 0 for main menu:";
						cin >> a;
					}

				}
			}break;
			case -1:
			{
				while (a != 0)
				{

					cout << "THIS IS EMERGENCY SREVICE"; cout << endl;
					cout << "---------------------------------------------"; cout << endl;
					/* idE[j] = variable1;*/
					cout << "PAtient iD:";
					idE[j] = j + 1;
					cout << idE[j]; cout << endl;
					cout << "ENter Patient AGe:"; cin >> ageE[j];
					cout << "ENter PAtient GEnder(m/f):"; cin >> sexE[j];
					while (sexE[j] != 'm' && sexE[j] != 'M' && sexE[j] != 'F' && sexE[j] != 'f')
					{
						cout << "PLease enter correct gender again:"; cin >> sexE[j];
					}
					cout << "ENter Disease ID:"; cin >> disE[j];
					cout << "THe Bed available:"; cin >> roomE[j];

					for (int counter1 = 0; counter1 < j; counter1++)
					{
						while (roomE[j] == roomE[counter1])
						{
							cout << "this is occupied:";
							cout << "Enter the bed no again:";
							cin >> roomE[j];
						}
					}
					/*roomE[j] = rand() % 100;
					cout << roomE[j] << endl;
					while (roomE[j] == 0)
					{
					cout << "The Bed available:";
					cout << roomE[j]; cout << endl;
					}*/
					/* cout << "Enter the Bill of the Patient:"; cin >> billE[j];
					 cout << "Recived Amount:"; cin >> recE[j];
					 cout << "Returned Amount:"; cout << recE[j] - billE[j]; cout << endl;*/
					j++;
					size1++;
					/*variable1++;*/
					cout << "Press 0 for main menu && 1 for TO ADD:";
					cin >> a;
					while (a < 0 || a>1)
					{
						cout << "Press 0 for main menu:";
						cin >> a;
					}

				}
			}break;
			default:
			{
				cout << "Inavlid INput" << endl;
				cout << "Press 0 for main menu:";
				cin >> a;
				while (a < 0 || a>0)
				{
					cout << "Press 0 for main menu";
					cin >> a;
				}
			}
			}
		}
		else if (n == 2)
		{
			while (a != 0)
			{
				cout << "Choose option:"; cout << endl;
				cout << "Enter 1 To SEARCH" << endl;
				cout << "Enter 2 To edit" << endl;
				cin >> search;
				switch (search)
				{
				case 1:
				{
					cout << "Choose option:"; cout << endl;
					cout << "Enter 1 to OPD SEARCH & 2 To EMERGENCY SEARCH:";
					cin >> s;
					if (s == 1)
					{
						cout << "ENter patient ID for searching:";
						cin >> num;
						num = num - 1;
						if (num < size && idO[num] >= 0)
						{
							cout << "RECORD OF THE RESPECTIVE PATIENT IS:"; cout << endl;
							cout << "------------------------------------------------------"; cout << endl;
							cout << "Respective PAtient iD is:"; cout << idO[num]; cout << endl;
							cout << " Respective Patient AGe:"; cout << ageO[num]; cout << endl;
							cout << " PAtient GEnder:"; cout << sexO[num]; cout << endl;
							cout << " Disease ID:"; cout << disO[num]; cout << endl;
							cout << "THe room available:"; cout << roomO[num]; cout << endl;
							cout << "Press P to see Financial record of the Patient" << endl;
							cin >> character;
							if (character == 'p' || character == 'P')
							{
								if (num < sizeO && idO[num] >= 0 && num >= 0)
								{
									cout << "The Bill of the Patient:"; cout << billO[num]; cout << endl;
									cout << "PAtient total deposited:"; cout << recO[num]; cout << endl;
									cout << "Returned amount"; cout << recO[num] - billO[num]; cout << endl;
									cout << "Press 0 for main menu && 1 for TO ADD:";
									cin >> a;
									while (a < 0 || a>1)
									{
										cout << "Press 0 for main menu:";
										cin >> a;
									}

								}
								else if (num > sizeO || idO[num] >= 0)
								{
									cout << "id not found:" << endl;
									cout << "Press 0 for main menu && 1 for TO ADD:";
									cin >> a;
									while (a < 0 || a>1)
									{
										cout << "Press 0 for main menu:";
										cin >> a;
									}

								}

							}
						}

						else
						{
							cout << "Respective Patient ID is not In this System"; cout << endl;
							cout << "Press 0 for main menu && 1 for TO ADD:";
							cin >> a;
							while (a < 0 || a>1)
							{
								cout << "Press 0 for main menu:";
								cin >> a;
							}
						}
					}
					else if (s == 2)
					{
						cout << "ENter patient ID for searching:";
						cin >> num1;
						num1 = num1 - 1;
						if (num1 < size1 && idE[num1] >= 0 && num1 >= 0)
						{
							cout << "RECORD OF THE RESPECTIVE PATIEN IS:"; cout << endl;
							cout << "------------------------------------------------------"; cout << endl;
							cout << "Respective PAtient iD is:"; cout << idE[num1]; cout << endl;
							cout << " Respective Patient AGe:"; cout << ageE[num1]; cout << endl;
							cout << " PAtient GEnder:"; cout << sexE[num1]; cout << endl;
							cout << " Disease ID:"; cout << disE[num1]; cout << endl;
							cout << "THe Bed available:"; cout << roomE[num1]; cout << endl;
							cout << "Press P to see Financial record of the Patient" << endl;
							cin >> character;
							if (character == 'p' || character == 'P')
							{
								if (num1 < sizeE && idE[num1] >= 0)
								{
									cout << "The Bill of the Patient:"; cout << billE[num1]; cout << endl;
									cout << "PAtient total deposited:"; cout << recE[num1]; cout << endl;
									cout << "Returned amount"; cout << recE[num1] - billE[num1]; cout << endl;
									cout << "Press 0 for main menu && 1 for TO ADD:";
									cin >> a;
									while (a < 0 || a>1)
									{
										cout << "Press 0 for main menu:";
										cin >> a;
									}
								}
								else if (num1 > sizeE || idE[num1] >= 0)
								{
									cout << "id not found:" << endl;
									cout << "Press 0 for main menu && 1 for TO ADD:";
									cin >> a;
									while (a < 0 || a>1)
									{
										cout << "Press 0 for main menu:";
										cin >> a;
									}
								}
							}
						}
						else
						{
							cout << "Respective Patient ID is not In this System"; cout << endl;
							cout << "Press 0 for main menu && 1 for TO ADD:";
							cin >> a;
							while (a < 0 || a>1)
							{
								cout << "Press 0 for main menu:";
								cin >> a;
							}
						}
					}
					break;
				case 2:
				{
					cout << "ChOOSE OPTION:"; cout << endl;
					cout << "1 for OPD Patient Edit 2 for EMERGENCY PAtient Edit:";
					cin >> edit;
					if (edit == 1)
					{
						cout << "Enter ID of the PAtient:";
						cin >> ed;
						ed = ed - 1;
						if (ed < size && idO[ed] >= 0)
						{
							cout << "CHOOSE WHAT YOU WANT TO EDIT" << endl;
							cout << "PRess 1 to edit Age"; cout << endl;
							cout << "PRess 2 to edit Gender"; cout << endl;
							cout << "PRess 3 to edit ROOM"; cout << endl;
							cout << "PRess 4 to edit Disease ID"; cout << endl;
							cout << "PRess 5 to edit Bill AMount"; cout << endl;
							/*cout << "Press 6 to edit RECIEVED AMOUNT"; cout << endl;*/
							cin >> number;
							if (number == 1)
							{
								cout << "ENter New Age:";
								cin >> age1;
								ageO[ed] = age1;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else if (number == 2)
							{
								cout << "ENter New Gender:";
								cin >> sex1;
								while (sex1 != 'm' && sex1 != 'M' && sex1 != 'F' && sex1 != 'f')
								{
									cout << "PLease enter correct gender again:"; cin >> sex1;
								}
								if (sex1 == 'M' || sex1 == 'm' || sex1 == 'F' || sex1 == 'f')
								{
									sexO[ed] = sex1;
									cout << "Press 0 for main menu && 1 for TO ADD:";
									cin >> a;
									while (a < 0 || a>1)
									{
										cout << "Press 0 for main menu:";
										cin >> a;
									}
								}
							}
							else if (number == 3)
							{
								cout << "ENter New Room:";
								cin >> room1;
								roomO[ed] = room1;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else if (number == 4)
							{
								cout << "ENter New Disease ID:";
								cin >> dis1;
								disO[ed] = dis1;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else if (number == 5)
							{
								cout << "ENter New BILL AMOUNT:";
								cin >> bill1;
								billO[ed] = bill1;
								cout << "ENter New Recived Amount:";
								cin >> rec1;
								recO[ed] = rec1;
								sizeO++;
								finO[ed] = ed;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							/*else if (number == 6)
							{
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}*/
							else if (number != 1 && number != 2 && number != 3 && number != 4 && number != 5)
							{
								cout << "You have choosen incorrect Option" << endl;
								cout << "Now press 0 to Main Menu and Again Give your Respective Command";
								cin >> a;
								while (a < 0 || a>0)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
						}
						else
						{
							cout << "PAtient id is not present"; cout << endl;
							cout << "Press 0 for main menu && 1 for TO ADD:";
							cin >> a;
							while (a < 0 || a>1)
							{
								cout << "Press 0 for main menu:";
								cin >> a;
							}
						}

					}
					else if (edit == 2)
					{
						cout << "Enter ID of the PAtient:";
						cin >> ed;
						ed = ed - 1;
						if (ed < size1 && idE[ed] >= 0)
						{
							cout << "CHOOSE WHAT YOU WANT TO EDIT" << endl;
							cout << "PRess 1 to edit Age"; cout << endl;
							cout << "PRess 2 to edit Gender"; cout << endl;
							cout << "PRess 3 to edit ROOM"; cout << endl;
							cout << "PRess 4 to edit Disease ID"; cout << endl;
							cout << "PRess 5 to edit Bill AMount"; cout << endl;
							/* cout << "Press 6 to edit RECIEVED AMOUNT"; cout << endl;*/
							cin >> number;
							if (number == 1)
							{
								cout << "ENter New Age:";
								cin >> age1;
								ageE[ed] = age1;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else if (number == 2)
							{
								cout << "ENter New Gender:";
								cin >> sex1;
								while (sex1 != 'm' && sex1 != 'M' && sex1 != 'F' && sex1 != 'f')
								{
									cout << "PLease enter correct gender again:"; cin >> sex1;
								}
								if (sex1 == 'M' || sex1 == 'm' || sex1 == 'F' || sex1 == 'f')
								{
									sexE[ed] = sex1;
									cout << "Press 0 for main menu && 1 for TO ADD:";
									cin >> a;
									while (a < 0 || a>1)
									{
										cout << "Press 0 for main menu:";
										cin >> a;
									}
								}
							}
							else if (number == 3)
							{
								cout << "ENter New Room:";
								cin >> room1;
								roomE[ed] = room1;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else if (number == 4)
							{
								cout << "ENter New Disease ID:";
								cin >> dis1;
								disE[ed] = dis1;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else if (number == 5)
							{
								cout << "ENter New BILL AMOUNT:";
								cin >> bill1;
								billE[ed] = bill1;
								cout << "ENter New Recived Amount:";
								cin >> rec1;
								recE[ed] = rec1;
								sizeE++;
								finE[ed] = ed;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							/* else if (number == 6)
							 {

								 cout << "Press 0 for main menu && 1 for TO ADD:";
								 cin >> a;
								 while (a < 0 || a>1)
								 {
									 cout << "Press 0 for main menu:";
									 cin >> a;
								 }
							 }*/
							else if (number != 1 && number != 2 && number != 3 && number != 4 && number != 5)
							{
								cout << "You have choosen incorrect Option" << endl;
								cout << "Now press 0 to Main Menu and Again Give your Respective Command";
								cin >> a;
								while (a < 0 || a>0)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
						}
						else
						{
							cout << "inavlid input"; cout << endl;
							cout << "Press 0 for main menu && 1 for TO ADD:";
							cin >> a;
							while (a < 0 || a>1)
							{
								cout << "Press 0 for main menu:";
								cin >> a;
							}
						}
					}
				}
				break;
				default:
				{
					cout << "Inavlid INput" << endl;
					cout << "Press 0 for main menu:";
					cin >> a;
					while (a < 0 || a>0)
					{
						cout << "Press 0 for main menu";
						cin >> a;
					}
				}
				}
				}
			}
		}
		else if (n == 3)
		{
			while (a != 0)
			{
				cout << "Choose Option" << endl;
				cout << "1 to Show OPD LIST && 2 to go for EMERGENCY LIST:";
				cin >> list;
				switch (list)
				{
				case 1:
				{
					if (size >= 1)
					{

						for (int k = 0; k < i; k++)
						{
							if (idO[k] != -11)
							{
								cout << "List of OPD PATIENTS"; cout << endl;
								cout << "------------------------------------------------------"; cout << endl;
								cout << "Respective PAtient iD is:"; cout << idO[k]; cout << endl;
								cout << " Respective Patient AGe:"; cout << ageO[k]; cout << endl;
								cout << " PAtient GEnder:"; cout << sexO[k]; cout << endl;
								cout << " Disease ID:"; cout << disO[k]; cout << endl;
								cout << "THe room available:"; cout << roomO[k]; cout << endl;
								if (finO[k] == k)
								{
									cout << "The Bill of the Patient:"; cout << billO[k]; cout << endl;
									cout << "Recieved amount:" << recO[k] << endl;
								}
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else
							{
								cout << "There Is No List of Patients" << endl;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
						}
					}
					else if (size < 1)
					{
						cout << "nothing to show in the list" << endl;
						cout << "Press 0 for main menu && 1 for TO ADD:";
						cin >> a;
						while (a < 0 || a>1)
						{
							cout << "Press 0 for main menu:";
							cin >> a;
						}
					}
				}
				break;
				case 2:
				{
					if (size1 >= 1)
					{

						for (int k = 0; k < j; k++)
						{
							if (idE[k] != -11)
							{
								cout << "List of Emergency PATIENTS"; cout << endl;
								cout << "------------------------------------------------------"; cout << endl;
								cout << "Respective PAtient iD is:"; cout << idE[k]; cout << endl;
								cout << " Respective Patient AGe:"; cout << ageE[k]; cout << endl;
								cout << " PAtient GEnder:"; cout << sexE[k]; cout << endl;
								cout << " Disease ID:"; cout << disE[k]; cout << endl;
								cout << "THe room available:"; cout << roomE[k]; cout << endl;
								if (finE[k] == k)
								{
									cout << "The Bill of the Patient:"; cout << billE[k]; cout << endl;
								}
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
							else
							{
								cout << "THERE IS NO LIST OF PATIENS" << endl;
								cout << "Press 0 for main menu && 1 for TO ADD:";
								cin >> a;
								while (a < 0 || a>1)
								{
									cout << "Press 0 for main menu:";
									cin >> a;
								}
							}
						}
					}
					else if (size < 1)
					{
						cout << "nothing to show in the list" << endl;
						cout << "Press 0 for main menu && 1 for TO ADD:";
						cin >> a;
						while (a < 0 || a>1)
						{
							cout << "Press 0 for main menu:";
							cin >> a;
						}
					}
				}break;
				default:
				{
					cout << "Inavlid INput" << endl;
					cout << "Press 0 for main menu:";
					cin >> a;
					while (a < 0 || a>0)
					{
						cout << "Press 0 for main menu";
						cin >> a;
					}
				}
				}
			}
		}
		else if (n == 4)
		{
			while (a != 0)
			{
				cout << "CHOOSE WHAT YOU WANT:" << endl;
				cout << "1 for OPD ID Delete && 2 For EMERGENCY ID DElETE:";
				cin >> del1;
				/*if (del1 <= size && idO[del1] != 0 && idO[del1] > 0)*/
				/*{*/
				switch (del1)
				{
				case 1:
				{
					cout << "Enter Patient ID:";
					cin >> delidO;
					delidO = delidO - 1;
					if (delidO < size)
					{
						idO[delidO] = -11;
						cout << "patient id deleted successfully" << endl;
						cout << "Press 0 for main menu && 1 for TO ADD:";
						cin >> a;
						while (a < 0 || a>1)
						{
							cout << "Press 0 for main menu:";
							cin >> a;
						}
					}
					else if (delidO >= size)
					{
						cout << "patient is not found" << endl;
						cout << "Press 0 for main menu && 1 for TO ADD:";
						cin >> a;
						while (a < 0 || a>1)
						{
							cout << "Press 0 for main menu:";
							cin >> a;
						}
					}
				}
				break;

				case 2:
				{
					cout << "Enter Patient ID:";
					cin >> delidE;
					delidE = delidE - 1;
					if (delidE < size1)
					{
						idE[delidE] = -11;
						cout << "patient id deleted successfully" << endl;
						cout << "Press 0 for main menu && 1 for TO ADD:";
						cin >> a;
						while (a < 0 || a>1)
						{
							cout << "Press 0 for main menu:";
							cin >> a;
						}

					}
					else if (delidE >= size)
					{
						cout << "patient is not found" << endl;
						cout << "Press 0 for main menu && 1 for TO ADD:";
						cin >> a;
						while (a < 0 || a>1)
						{
							cout << "Press 0 for main menu:";
							cin >> a;
						}
					}

				}break;
				default:
				{
					cout << "Inavlid INput" << endl;
					cout << "Press 0 for main menu:";
					cin >> a;
					while (a < 0 || a>0)
					{
						cout << "Press 0 for main menu";
						cin >> a;
					}
				}
				}
				/*}
				else
				{
				cout << "invalid input of del"<<endl;
				cout << "Press 0 for main menu && 1 for TO ADD:";
				cin >> a;
				}*/
			}
		}
		else if (n == 5)
		{
			cout << "THank you for using program:";
		}
		else if (n != 1 && n != 2 && n != 3 && n != 4)
		{
			cout << "Please choose correct option" << endl;
			cout << "Press 0 for main menu:";
			cin >> a;
			while (a < 0 || a>0)
			{
				cout << "Press 0 for main menu";
				cin >> a;
			}
		}
	} while (a == 0);

}
