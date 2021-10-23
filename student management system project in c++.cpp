#include<iostream>

using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter()
{
    int ch=0;
    cout<<"\n>>> How many students do you want to enter?"<<'\n';
    cout<<">>> ";
    cin>>ch;

    if(total==0)
    {
        total=ch+total;

        for(int i=0; i<ch; i++)
        {
            cout<<"\n\n>>> Enter the Data of student: "<<i+1<<'\n';
            cout<<"\tEnter name: ";
            cin>>arr1[i];
            cout<<"\tEnter Roll no: ";
            cin>>arr2[i];
            cout<<"\tEnter course: ";
            cin>>arr3[i];
            cout<<"\tEnter class: ";
            cin>>arr4[i];
            cout<<"\tEnter contact: ";
            cin>>arr5[i];
        }
    }
    else
    {
        for(int i=total; i<ch+total; i++)
        {
            cout<<"\n\n>>> Enter the Data of student: "<<i+1<<'\n';
            cout<<"\tEnter name: ";
            cin>>arr1[i];
            cout<<"\tEnter Roll no: ";
            cin>>arr2[i];
            cout<<"\tEnter course: ";
            cin>>arr3[i];
            cout<<"\tEnter class: ";
            cin>>arr4[i];
            cout<<"\tEnter contact: ";
            cin>>arr5[i];
        }
        total=ch+total;
    }
    cout<<"\n\n";
}

void show()
{
    if(total==0)
    {
        cout<<"No data is entered!"<<'\n';
    }
    else
    {
        for(int i=0; i<total; i++)
        {
            cout<<"\nData of Student: "<<i+1<<'\n';
            cout<<"\tName: "<<arr1[i]<<'\n';
            cout<<"\tRoll no: "<<arr2[i]<<'\n';
            cout<<"\tCourse: "<<arr3[i]<<'\n';
            cout<<"\tClass: "<<arr4[i]<<'\n';
            cout<<"\tContact: "<<arr5[i]<<'\n';
        }
    }
    cout<<"\n\n";
}

void search()
{
    if(total==0)
    {
        cout<<"No data is entered!"<<'\n';
    }
    else
    {
        string rollno;
        cout<<">>> Enter the roll no of student: "<<'\n';
        cout<<">>> ";
        cin>>rollno;

        for(int i=0; i<total; i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"\n\tName: "<<arr1[i]<<'\n';
                cout<<"\tRoll no: "<<arr2[i]<<'\n';
                cout<<"\tCourse: "<<arr3[i]<<'\n';
                cout<<"\tClass: "<<arr4[i]<<'\n';
                cout<<"\tContact: "<<arr5[i]<<'\n';
            }
        }
    }
    cout<<"\n\n";
}

void update()
{
    if(total==0)
    {
        cout<<"No data is entered!"<<'\n';
    }
    else
    {
        string rollno;
        cout<<"Enter the roll no of student which you want to update: "<<'\n';
        cout<<">>> ";
        cin>>rollno;

        for(int i=0; i<total; i++)
        {
            if(rollno==arr2[i])
            {
                cout<<"\n\tPrevious data"<<'\n';
                cout<<"\tName: "<<arr1[i]<<'\n';
                cout<<"\tRoll no: "<<arr2[i]<<'\n';
                cout<<"\tCourse: "<<arr3[i]<<'\n';
                cout<<"\tClass: "<<arr4[i]<<'\n';
                cout<<"\tContact: "<<arr5[i]<<'\n';

                cout<<"\n\tEnter new data"<<'\n';
                cout<<"\tEnter name: ";
                cin>>arr1[i];
                cout<<"\tEnter Roll no: ";
                cin>>arr2[i];
                cout<<"\tEnter course: ";
                cin>>arr3[i];
                cout<<"\tEnter class: ";
                cin>>arr4[i];
                cout<<"\tEnter contact: ";
                cin>>arr5[i];
            }
        }
    }
    cout<<"\n\n";
}



void deleterecord()
{
    if(total==0)
    {
        cout<<"No data is entered!"<<'\n';
    }
    else
    {
        int a;
        cout<<"Press 1 to delete all record"<<'\n';
        cout<<"Press 2 to delete specific record"<<'\n';
        cout<<">>> ";
        cin>>a;

        if(a==1)
        {
            total=0;
            cout<<"All record is deleted..!!"<<'\n';
        }
        else if(a==2)
        {
            string rollno;
            cout<<"Enter the roll no of student which you wanted to delete"<<'\n';
            cout<<">>> ";
            cin>>rollno;

            for(int i=0; i<total; i++)
            {
                if(rollno==arr2[i])
                {
                    for(int j=i; j<total; j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                    }
                    total--;
                    cout<<"Your required record is deleted"<<'\n';
                }
            }
        }
        else
        {
            cout<<"Invalid input!";
        }
    }
    cout<<"\n\n";
}

int main()
{
    int value;

    while(true)
    {
        cout<<"1. Press 1 to enter data"<<'\n';
        cout<<"2. Press 2 to show data"<<'\n';
        cout<<"3. Press 3 to search data"<<'\n';
        cout<<"4. Press 4 to update data"<<'\n';
        cout<<"5. Press 5 to delete data"<<'\n';
        cout<<"6. Press 6 to exit"<<'\n';

        cout<<"\n>>> ";
        cin>>value;

        switch(value)
        {
        case 1:
            enter();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            deleterecord();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout<<"->Invalid input!"<<'\n';
            break;
        }
        cout<<"\n";
    }
}
