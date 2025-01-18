
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sparseMatrixArrayImplementation(vector<vector<int>> sparseMatrix,int rows,int columns)
{
    vector<vector<int>>  twoDArrayMatrix(3);
	for (int i = 0; i < rows; i++)
    {
		for (int j = 0; j < columns; j++)
        {
			if (sparseMatrix[i][j] != 0)
            {
                twoDArrayMatrix[0].push_back(i);
				twoDArrayMatrix[1].push_back(j);
				twoDArrayMatrix[2].push_back(sparseMatrix[i][j]);
            }
        }
    }
     
    return twoDArrayMatrix;
}

int main()
{
    int rows,columns;
    cout << " enter the numbers of rows:" << endl;
    cin >> rows;
	 cout << " enter the numbers of columns:" << endl;
    cin >> columns;
	vector<vector<int>> sparseMatrix(rows, vector<int>(columns));
	
    for (int i = 0; i < rows; i++)
    {
		for (int j = 0; j < columns; j++)
        {
            cout << " enter the value at "<< i << "th row and " << j<< "th column:" << endl; 
            cin >> sparseMatrix[i][j];
        }
    }


    vector<vector<int>> finalMatrix=sparseMatrixArrayImplementation(sparseMatrix,rows,columns);
    cout << " the array implementation of the given sparse matrix is :" << endl;
    
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<finalMatrix[i].size(); j++)
			cout <<" "<< finalMatrix[i][j];

		cout <<"\n";
	}
   
	return 0;
}


