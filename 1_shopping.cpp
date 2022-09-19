/*                    1. C/C++ PROJECT
                       ================
/* ******************* ONLINE SHOPPING ******************** */

#include<iostream>
#include<string>
using namespace std;

int main()
{    char startvalue, choiceagain;
     float onlineShopping(void);
     
     

    cout<<" \nPlease press s to start the shopping: ";
    start:
   
    cin>> startvalue;
    startlevel:
    if(startvalue=='s'||startvalue=='S')
    {
        float totalamount=onlineShopping();
        cout<<"total billamount is "<<totalamount;
        shopagain:
        cout<<"\nDo you want shopping again, Y or N :";
        cin>>choiceagain;
        if(choiceagain=='y'|| choiceagain=='Y')
        {
            goto startlevel;
        }
        else if (choiceagain=='n'|| choiceagain=='N'){
             cout<<"Thanks for shopping ...!";
        }
        else{
             cout<<"You have entered wrong option, Please type again:\n";
        goto shopagain;
        }
    }
    else
    {
        cout<<"You have entered wrong option, Please s\n";
        goto start;
    }

}

float onlineShopping()
{
     char choice;
     char item; 
     int quantity;
     float billamount=0;

    cout<<"\n*************** Welcome to Online Shopping ***************"<<endl;
    cout<<" ---------- please follow the instructions ----------\n";

    cout<<"\nPlease enter l to order laptops "<<endl;
    cout<<"Please enter d to order desktop "<<endl;
    cout<<"Please enter s to order speaker "<<endl;
    cout<<"Please enter h to order headphone"<<endl;
    cout<<"Please enter m to order mobile "<<endl;
    cout<<"Enter:";
    cin>>choice;

/*   *************   laptop ************/
    if(choice=='l'||choice=='L')
    
    { 
        laptoplevel:
        cout<<"----laptop details-----"<<endl;
        cout<<"(1) apple => Price : 1,50,000"<<endl;
        cout<<"(2) samsung => Price : 100,000"<<endl;
        cout<<"(3) motorola => Price : 90,000"<<endl;
        cout<<"(4) lenovo => Price : 70,000"<<endl;
        cout<<"(5) realme  => Price : 40,000"<<endl;

        cout<<"Please enter your choice:";
        cin>>item;

        if(item=='1')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*150000;
        }

        else if(item=='2')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*100000;
        }

        else if(item=='3')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*90000;
        }

        else if(item=='4')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70000;
        }

        else if(item=='5')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*40000;
        }

        else
        {
            cout<<"You have entered wrong optin, please type again\n";
            goto laptoplevel;
        }

    }

    /*   ********* desktop ********** */

      else if(choice=='d'||choice=='D')
    
    { 
        desktoplevel:
        cout<<"----desktop details-----"<<endl;
        cout<<"(1) apple => Price : 100,000"<<endl;
        cout<<"(2) samsung => Price : 90,000"<<endl;
        cout<<"(3) lenovo => Price : 80,000"<<endl;
        cout<<"(4) LG => Price : 70,000"<<endl;
        cout<<"(5) raelme  => Price : 50,000"<<endl;

        cout<<"Please enter your choice:";
        cin>>item;

        if(item=='1')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*100000;
        }

        else if(item=='2')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*90000;
        }

        else if(item=='3')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*80000;
        }

        else if(item=='4')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*70000;
        }

        else if(item=='5')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*50000;
        }

        else
        {
            cout<<"You have entered wrong optin, please type again\n";
            goto desktoplevel;
        }

    }

    /*   ********* speaker  ********** */

      else if(choice=='s'||choice=='S')
    
    { 
        speakerlevel:
        cout<<"----speaker details-----"<<endl;
        cout<<"(1) boat => Price : 1000"<<endl;
        cout<<"(2) samsung => Price : 900"<<endl;
        cout<<"(3) LTG => Price : 800"<<endl;
        cout<<"(4) LG => Price : 700"<<endl;
        cout<<"(5) raelme  => Price : 500"<<endl;

        cout<<"Please enter your choice:";
        cin>>item;

        if(item=='1')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*1000;
        }

        else if(item=='2')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*900;
        }

        else if(item=='3')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*800;
        }

        else if(item=='4')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*700;
        }

        else if(item=='5')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*500;
        }

        else
        {
            cout<<"You have entered wrong optin, please type again\n";
            goto speakerlevel;
        }

    }

    /*   ********* headphone ********** */

      else if(choice=='h'||choice=='H')
    
    { 
        headphonelevel:
        cout<<"----headphone details-----"<<endl;
        cout<<"(1) apple => Price : 10000"<<endl;
        cout<<"(2) samsung => Price : 9000"<<endl;
        cout<<"(3) boat => Price : 8000"<<endl;
        cout<<"(4) oneplus => Price : 7000"<<endl;
        cout<<"(5) raelme  => Price : 5000"<<endl;

        cout<<"Please enter your choice:";
        cin>>item;

        if(item=='1')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*10000;
        }

        else if(item=='2')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*9000;
        }

        else if(item=='3')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*8000;
        }

        else if(item=='4')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*7000;
        }

        else if(item=='5')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*5000;
        }

        else
        {
            cout<<"You have entered wrong optin, please type again\n";
            goto headphonelevel;
        }

    }

    /*   ********* mobile ********** */

      else if(choice=='m'||choice=='M')
    
    { 
        mobilelevel:
        cout<<"----mobile details-----"<<endl;
        cout<<"(1) apple => Price : 30000"<<endl;
        cout<<"(2) samsung => Price : 25000"<<endl;
        cout<<"(3) oneplus=> Price : 20000"<<endl;
        cout<<"(4) LG => Price : 15000"<<endl;
        cout<<"(5) raelme  => Price : 10000"<<endl;

        cout<<"Please enter your choice:";
        cin>>item;

        if(item=='1')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*30000;
        }

        else if(item=='2')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*25000;
        }

        else if(item=='3')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*20000;
        }

        else if(item=='4')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*15000;
        }

        else if(item=='5')
        {
            cout<<"enter quantity:";
            cin>>quantity;
            billamount=billamount+quantity*10000;
        }

        else
        {
            cout<<"You have entered wrong optin, please type again\n";
            goto mobilelevel;
        }

    }
    
    return billamount;

}