#include<iostream>

using namespace std;

int m = 3;
int n = 4;
int arr[3][4] = 
    {{1,0,1,1},
    {1,1,1,1},
    {1,1,0,1}};

void markRow(int i){
    for (int j = 0; j < n; j++)
    {
        arr[i][j] = -1;
    }
}

void markCol(int j){
    for (int i = 0; i < m; i++)
    {
        arr[i][j] = -1;
    }
}

int Brute(){

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0){
                markRow(i);
                markCol(j);
            }
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == -1)
            arr[i][j] = 0;
        }
        
    }
 for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
         cout<<endl;
    }

}

int Better(){
    int row[m] = {0};
    int col[n] = {0};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(row[i] == 1 || col[j] == 1 ){
                arr[i][j] = 0;

            }
        }  
    }      
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int Optimal(){
    int col = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                if(j!= 0){
                    arr[0][j] = 0;
                } else col = 0; 
            }
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(arr[i][j] != 0 ){
                if(arr[i][0] == 0 || arr[0][j] == 0){
                    arr[i][j] =0;
                } 
            }
        }
    }
    if(arr[0][0] == 0){
        for (int j = 0; j < n; j++)
        {
            arr[0][j] = 0;
        }
        
    }  
    if(col == 0){
        for(int i =0;i<n;i++)
        arr[i][0] = 0;
    }    
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    //Brute();
    cout<<endl;
    //Better();
    Optimal();
 return 0;
}