#include<iostream>
using namespace std;
int main()
{
char name[9];
int roll_no,cla;
float total, percentage;
string str;
cout<<"plaese enter name : ";
cin>>name;
cout<<"plaese enter roll no. : ";
cin>>roll_no;
cout<<"plaese enter class : ";
cin>>cla;
if(cla<=10)
{
    int hindi,english,maths,sst,science;

    cout<<"please enter yoursubject\n";
    cout<<"please enter hindi marks : ";
    cin>>hindi;
    cout<<"please enter enlish : ";
    cin>>english;
    cout<<"please enter maths : ";
    cin>>maths;
    cout<<"please enter sst : ";
    cin>>sst;
    cout<<"please enter science : ";
    cin>>science;
    total=hindi+english+maths+sst+science;
    cout<<"your name is :"<<name<<endl;
    cout<<"your roll is : "<<roll_no<<endl;
    cout<<"your class is "<<cla<<endl;
    cout<<"your hindi marks is : "<<hindi<<endl;
    cout<<"your english marks is : "<<english<<endl;
    cout<<"your maths marks is : "<<maths<<endl;
    cout<<"your sst marks is : "<<sst<<endl;
    cout<<"your science marks is : "<<science<<endl;
    cout<<"total marks is : "<<total<<endl;
    percentage=(total/500)*100;
    cout<<"precentage is : "<<percentage<<endl;
}
else if (cla==12)
{
    cout<<"please enter your stream arts , commerce ,science : ";
    cin>>str;
    if(str=="arts")
    {
        int history,geograhy,hindi,english,sanskrit;

            cout<<"please enter subject\n";
            cout<<"please enter history marks : ";
            cin>>history;
            cout<<"please enter geography marks : ";
            cin>>geograhy;
            cout<<"please enter hindi : ";
            cin>>hindi;
            cout<<"please enter english : ";
            cin>>english;
            cout<<"please enter sanskrit : ";
            cin>>sanskrit;
            total=history+geograhy+hindi+english+sanskrit;
            cout<<"your name is :"<<name<<endl;
            cout<<"your roll is : "<<roll_no<<endl;
            cout<<"your class is "<<cla<<endl;
            cout<<"your history marks is : "<<history<<endl;
            cout<<"your geograhy marks is : "<<geograhy<<endl;
            cout<<"your hindi marks is : "<<hindi<<endl;
            cout<<"your english marks is : "<<english<<endl;
            cout<<"your sanskrit marks is : "<<sanskrit<<endl;
            cout<<"total marks is : "<<total<<endl;
            percentage=(total/500)*100;
            cout<<"precentage is : "<<percentage<<endl;
    }

    else if(str=="commerce")
    {
        int acoount,business,maths,english,economics;

            cout<<"please enter subject\n";
            cout<<"please enter acoount  marks : ";
            cin>>acoount;
            cout<<"please enter business marks : ";
            cin>>business;
            cout<<"please enter maths : ";
            cin>>maths;
            cout<<"please enter english : ";
            cin>>english;
            cout<<"please enter economics : ";
            cin>>economics;
            total=acoount+business+maths+english+economics;
            cout<<"your name is :"<<name<<endl;
            cout<<"your roll is : "<<roll_no<<endl;
            cout<<"your class is "<<cla<<endl;
            cout<<"your acoount marks is : "<<acoount<<endl;
            cout<<"your business marks is : "<<business<<endl;
            cout<<"your maths marks is : "<<maths<<endl;
            cout<<"your english marks is : "<<english<<endl;
            cout<<"your economics marks is : "<<economics<<endl;
            cout<<"total marks is : "<<total<<endl;
            percentage=(total/500)*100;
            cout<<"precentage is : "<<percentage<<endl;
    }
    else if(str=="science")
    {
        int physics,maths,chemistry,english,physical_edu;

            cout<<"please enter subject\n";
            cout<<"please enter physics marks : ";
            cin>>physics;
            cout<<"please enter maths marks : ";
            cin>>maths;
            cout<<"please enter chemistry : ";
            cin>>chemistry;
            cout<<"please enter english : ";
            cin>>english;
            cout<<"please enter physical_edu : ";
            cin>>physical_edu;
            total=physics+maths+chemistry+physical_edu,english;
            cout<<"your name is :"<<name<<endl;
            cout<<"your roll is : "<<roll_no<<endl;
            cout<<"your class is "<<cla<<endl;
            cout<<"your physics marks is : "<<physics<<endl;
            cout<<"your maths marks is : "<<maths<<endl;
            cout<<"your maths marks is : "<<chemistry<<endl;
            cout<<"your english marks is : "<<english<<endl;
            cout<<"your economics marks is : "<<physical_edu<<endl;
            cout<<"total marks is : "<<total<<endl;
            percentage=(total/500)*100;
            cout<<"precentage is : "<<percentage<<endl;
    }

}
    if(percentage>=90.00)
    {
        cout<<"your grade is : A+";
    }
    else if(percentage>=80.00 && percentage<90.00)
    {
        cout<<"your grade is : A";
    }
    else if(percentage>=70.00 && percentage<80.00)
    {
        cout<<"your grade is : B+";
    }
    else if(percentage>=60.00 && percentage<70.00)
    {
        cout<<"your grade is : B ";
    }
    else if(percentage>=50.00 && percentage<60.00)
    {
        cout<<"your grade is : c+ ";
    }
    else if(percentage>=40.00 && percentage<50.00)
    {
        cout<<"your grade is : c ";
    }
    else
    {
        cout<<"your result is  : fail";
    }

}
