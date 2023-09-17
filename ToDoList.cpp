#include<iostream>
#include<string>
using namespace std;
int MaxTasks=50;
//g++ ToDoList.cpp
class ToDoList
{
    public:
    bool completed;
    string data;
};
    void displayTask(ToDoList Task[],int NumberOfTasks)
    {
        
        for(int i=0;i<NumberOfTasks;++i)
        {
            
            cout<<i+1<<".";
            if(Task[i].completed)
            {
                cout<<"X"<<endl;
            }
            else
            cout<<Task[i].data<<endl;
        }
    }
    void markAsCompleted(ToDoList Task[],int NumberOfTasks,int CompletedTask)
    {
        if(CompletedTask>0 && CompletedTask<=NumberOfTasks)
        Task[CompletedTask].completed=true;
        else
        cout<<"enter withen range"<<endl;
    }
    void removeTask(ToDoList Task[],int& NumberOfTasks,int RemoveTask)
    {

        if(NumberOfTasks>0 && RemoveTask<=NumberOfTasks) 
        {
        for(int i=RemoveTask;i<NumberOfTasks-1;++i) 
        {
            Task[i]=Task[i+1];
        }
        NumberOfTasks--;
    }
    else{
        cout<<"enter withen range"<<endl;
    }
    }

int main()
{
    ToDoList Task[MaxTasks];
    int choice;
    int NumberOfTasks=0;
    
    do
    {
        cout<<"To-Do-List"<<endl<<endl;
        cout<<" 1. Add Task"<<endl; 
        cout<<" 2. View Task"<<endl;
        cout<<" 3. Mark Task as Completed"<<endl; 
        cout<<" 4. Remove Task"<<endl;
        cout<<" 5. Exit Code"<<endl;
        cout<<"Enter choice :  ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            if(NumberOfTasks<MaxTasks)
            {
                cout<<"Write Task"<<endl<<endl;
                cin.ignore();
                getline(cin,Task[NumberOfTasks].data);
                Task[NumberOfTasks].completed=false;
                ++NumberOfTasks;
            }
            else
            {
                cout<<"List is Full"<<endl;
            }
                break;
            case 2:

                displayTask(Task,NumberOfTasks);
                break;

            case 3:

            cout<<"Enter a task number you have completed: ";
            int CompletedTask;
            cin>>CompletedTask;
            markAsCompleted(Task,NumberOfTasks,CompletedTask-1);
            break;

            case 4:
            int RemoveTask;
            cout<<"Enter task number you like to remove: ";
            cin>>RemoveTask;
            removeTask(Task,NumberOfTasks,RemoveTask-1);
            break;

            case 5:

                cout<<"Thank You!"<<endl;
               break;

            default:
            cout<<"Invalid choice. Please try again."<<endl;
        }
    } while (choice!=5);

    return 0;   
}
