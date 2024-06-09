#include<iostream>
using namespace std;

//to make a to do list.

string list[10];
int task_count=0;
void enter()
{
    system("CLS");
    if (task_count>=10)
    {
        cout<<"The list is full.\n You cannot enter any more tasks.\n";
    }
    cout<<"Enter a new task.\n";
    cin.ignore();
    getline(cin,list[task_count]);
    task_count++;  
}

void show()
{
    system("CLS");
    if(task_count==0)
    {
        cout<<"The list is empty.\n";
    }
    else
    {
        for(int j=0; j<=task_count; j++)
        {
            cout<<(j+1)<<")"<<list[j]<<"\n";
        }

    }
    
}
void del()
{
    int d;
    cout<<"enter the task number which you want to delete\n";
    cin>>d;
    if (d < 1 || d > task_count) {
        cout << "Invalid task number.\n";
        return;
    }

    for (int i = d - 1; i < task_count - 1; i++) {
        list[i] = list[i + 1];
    }

    task_count--;
    cout << "Task number " << d << " has been deleted from the list.\n";
}
void update()
{
    system("CLS");
    int u;
    cout<<"Enter task number which you want to update.\n";
    cin>>u;
    if (u < 1 || u > task_count) {
        cout << "Invalid task number.\n";
        return;
    }

    cin.ignore();
    cout << "Current task: " << list[u - 1] << "\n";
    cout << "Enter updated task: ";
    getline(cin, list[u - 1]);
}
int main()
{
    //to make a to do list.
    int choice;

    
    while (true)
    {
        cout<<"hi\n";
        cout<<"Select from the following.\n";
        cout<<"\n";
        cout<<"1) Enter a task.\n";
        cout<<"2) Show all the tasks.\n";
        cout<<"3) Delete a task.\n";
        cout<<"4) Update a task.\n";
    
        cin>>choice;
        switch (choice)
        {
        case 1:
           enter();
           break;
            
        case 2:
           show();
           break;
        
        case 3:
           del();
           break;
        case 4:
           update();
           break;
    
        default:
           cout<<"Enter a valid choice\n";
        
    
    return 0;
        }    
    
    }

}    
    
    
