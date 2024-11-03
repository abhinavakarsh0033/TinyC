/**
 * TinyC Intermediate Code Generation
 * Test2 : Testing recursive function call, 2D array, and for loop, and type checking
 * Pranav Jha (22CS30061)
 * Abhinav Akarsh (22CS30004)
 */

int RecFunc(int n, int sum, int dp[10][10])
{
    if (sum == 0)
        return 1;
    if (n <= 0)
        return 0;
    if (dp[n][sum] != -1)
        return dp[n][sum];
    return dp[n][sum] = RecFunc(n - 1, sum, dp);
}

int main()
{
    float arr[10][20];
    float x = 2.5;
    int c = 1;
    int b = arr[1][2] + c;
    return 0;

    int arr1[5];
    int dp[11][11];
    int i =0;
    do
    {
        arr1[i] = 1;
        i++;
    }
    while(i < 5);
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            dp[i][j] = -1;
        }
    }
    int sum = 9;
    int ans = RecFunc(5, sum, dp);
    return 0;
}

