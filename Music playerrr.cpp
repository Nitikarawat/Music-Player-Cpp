	/**************************************************************MUSIC PLAYER**********************************************************************************************/
	/************************************************CODED BY : SHIVANI VATS and NITIKA RAWAT********************************************************************************/    
	/*****************************************************************BCA 3B"************************************************************************************************/
	/************************************SRI GURU TEGH BAHADUR INSTITUTE OF MANAGEMENT AND INFORMATION TECHNOLOGY************************************************************/
	#include <iostream>
	#include <windows.h>
	#include <mmsystem.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include<unistd.h>
	using namespace std;
	
	int list()
	    {   int ch;
	    	cout<<"\n         ALL SONGS LIST SELECT ANY \n"
	    		  "\n           1. Euphoria\n"
	    		  "\n           2. So Far Away\n"
				  "\n           3. Cypher Part3\n"
				  "\n           4. So that I love you\n"
				  "\n           5. Nothing like us\n"
				  ;
	    	cin>>ch;
	    	return ch;
		}
		
	int main()
	{ 
	    int ch,lch;
	    system("cls");
	            cout<<"\n            **MUSIC PLAYER**\n";
	            cout<<"\n      **CODED BY : SHIVANI VATS and NITIKA RAWAT**\n";   
	            cout<<"\n               **BCA 3B**\n";
	            cout<<"\n  **SRI GURU TEGH BAHADUR INSTITUTE OF MANAGEMENT AND INFORMATION TECHNOLOGY**\n\n\n\n";
	    PlaySound(TEXT("Loop 01_ Dreamy.wav"), NULL, SND_SYNC|SND_FILENAME);
	    cout<<"\n                   WELCOME TO MUSIC PLAYER         \n";
		cout<<"                          loading...";
		sleep(5);
		system("CLS");
	    do
	{
		
		ch=list();
	    switch(ch)
	        {
	      	case 1:
			        while ( 1 )
					{
							long int A;
							system("CLS");
							cout<<"\n                               MUSIC PLAYER      \n\n\n";
							PlaySound(TEXT("BTS - Euphoria.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
							cout<<"\n                             Now Playing Euphoria......  \n\n";
							cout << "                                 0 = EXIT\n"
									"                                 1 = STOP\n"
									"                                 2 = LIST\n";
							cin >> A;
							system ("CLS");
							if (A == 0)
							{ 
							system("PAUSE");
							break;
							}
							if (A == 1)
							{ 
							PlaySound(0, 0, 0);
							 cout << "To restart music: ";
							 system ("PAUSE");
							  }
							if (A == 2)
							{
							break;
							 }
							system("cls");
	               }
	               break;
	
			case 2:
			       while ( 1 )
					{
							long int A;
							system("CLS");
							cout<<"\n                               MUSIC PLAYER      \n\n\n";
							PlaySound(TEXT("BTS___so_far_away_SUGA_Ver._29.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
							cout<<"\n                             Now Playing So Far Away....  \n\n";
							cout << "                                 0 = EXIT\n"
									"                                 1 = STOP\n"
									"                                 2 = LIST\n";
							cin >> A;
							system ("CLS");
							if (A == 0)
							{
							 exit(EXIT_SUCCESS);
							  }
							if (A == 1)
							{ 
							 PlaySound(0, 0, 0);
							 cout << "To restart music: ";
							 system ("PAUSE");
							  }
							if (A == 2)
							{
							 break;
							  }
	                        system("cls");
				   }
	               break;
	
			case 3:	
			     while ( 1 )
					{
							long int A;
							system("CLS");
							cout<<"\n                               MUSIC PLAYER      \n\n\n";
							PlaySound(TEXT("BTS_ChyperPT3Killer.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
							cout<<"\n                           Now Playing Cypher Part3.....  \n\n";
							cout << "                                 0 = EXIT\n"
									"                                 1 = STOP\n"
									"                                 2 = LIST\n";
							cin >> A;
							system ("CLS");
							if (A == 0)
							{ 
							exit(EXIT_SUCCESS);
							 }
							if (A == 1)
							{
							 PlaySound(0, 0, 0);
							  cout << "To restart music: ";
							  system ("PAUSE");
							  }
							if (A == 2)
							{ 
							break; 
							}
							system("cls");
						 }
	               break;
	        case 4:
	        	while ( 1 )
					{
							long int A;
							system("CLS");
							cout<<"\n                               MUSIC PLAYER      \n\n\n";
							PlaySound(TEXT("BTS - (RapMonster jungkook) So That i Love You BTS FRESTA 2016.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
							cout<<"\n                          Now Playing So that I love you....  \n\n";
							cout << "                                 0 = EXIT\n"
									"                                 1 = STOP\n"
									"                                 2 = LIST\n";
							cin >> A;
							system ("CLS");
							if (A == 0)
							{
							 exit(EXIT_SUCCESS);
							  }
							if (A == 1)
							{ 
							PlaySound(0, 0, 0);
							 cout << "To restart music: ";
							 system ("PAUSE"); 
							 }
							if (A == 2)
							{ 
							break;
							 }
							system("cls");
	               }
	               break;
			case 5:
			   while ( 1 )
					{
							long int A;
							system("CLS");
							cout<<"\n                               MUSIC PLAYER      \n\n\n";
							PlaySound(TEXT("Nothing like us cover by jungkook  of bts.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
							cout<<"\n                          Now Playing Nothing like us......  \n\n";
							cout << "                                 0 = EXIT\n"
									"                                 1 = STOP\n"
									"                                 2 = LIST\n";
							cin >> A;
							system ("CLS");
							if (A == 0)
							{ 
							exit(EXIT_SUCCESS);
							 }
							if (A == 1)
							{
							 PlaySound(0, 0, 0);
							  cout << "To restart music: ";
							  system ("PAUSE");
							   }
							if (A == 2)
							{
							break; 
							 }
							system("cls");
	               }
	               break;
	
		  }//swich close
		cout<<"\n WANT TO LISTEN MORE SONG IN THE LIST PRESS 1 OTHERWISE 0 TO CONFIRM EXIT :";
		cin>>lch;
		system("cls");
	}while(lch==1); 
	return 0;
	}
	//main close
	

