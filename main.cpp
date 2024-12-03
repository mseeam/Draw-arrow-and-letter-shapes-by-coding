/*
  Author: Mohammad Seeam
  Course: COSC 1337 Semester: Spring 2022    Section: DL9   ;  Instructor: Thayer
  Lab: 2  Purpose:  Draw 1 arrow and 2 letter shapes with variable height.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    while(true){
        cout<<"Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : ";
        char options=' ';
        cin>>options;
        char options1 = tolower(options);

        if (options1=='a'){
        
        int height;
        cout<< "Please enter the height:";
        cin>> height;

        int base=height*2;
        
        for(int r=0; r<height; r++){
            for(int c=0; c<base;c++){
                if (c==height-r || c==height+r ){
                    cout <<"*";
                }else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        
        }else if (options1=='b'){
            cout<<" Printing H letter for you ";
            int rows;
            cout<< " Please enter the number of rows:";
            cin>> rows;

            for (int a=1; a<=rows; a++){
                if(a==(ceil(rows/double(2.0)))){
            string s="";
            s=s+"*";
            for(int c=1; c<=rows-2; c++){
                s=s+"*";
            }
            s=s+"*";
            cout << s <<endl;   
            }else{
            //makes a *________*
            string s="";
            s=s+"*";
            for(int c=1; c<=rows-2; c++){
                s=s+" ";
            }
            s=s+"*";
            cout << s <<endl;  }  
            }   
        }
    
        else if (options1=='c'){
            cout<<" Printing E letter for you";
            int rows;
            cout << ",Please enter the number of rows:" ;
            cin >> rows ;

            for (int a=1; a<=rows ; a++){
                if(a==1){
                    for(int b=1;b<=rows;b++){
                        cout << "*";
                    }cout<<endl;
                }else if(a==(ceil(rows/double(2.0)))){
            
                    for(int b=1;b<=rows;b++){
                        cout << "*";
                    }
                    cout<<endl;

        
                }else if(a==rows){
                    for(int b=1;b<=rows;b++){
                        cout << "*";
                    }
                    cout<<endl;
                }else{
                    cout << "*" << endl;
                }
            }
        }else if(options1=='q'){
            cout<<"Good Bye ! ";
            break;
        }

        
    }

}

/*
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : A
Please enter the height:15
               *              
              * *             
             *   *            
            *     *           
           *       *          
          *         *         
         *           *        
        *             *       
       *               *      
      *                 *     
     *                   *    
    *                     *   
   *                       *  
  *                         * 
 *                           *
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : 
*/

/*
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : B
 Printing H letter for you  Please enter the number of rows:7
*     *
*     *
*     *
*******
*     *
*     *
*     *
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : 
*/

/*
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : c
 Printing E letter for you,Please enter the number of rows:11
***********
*
*
*
*
***********
*
*
*
*
***********
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : 
*/

/*
Please enter option letter, A) ^ symbol , B) H letter, C) E letter, Q) Quit : q
Good Bye ! %    
*/















