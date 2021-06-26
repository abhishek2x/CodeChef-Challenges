#include <bits/stdc++.h>
using namespace std;


// The pattern here is :
// Shift 'n-1' disks from 'A' to 'B'.
// Shift last disk from 'A' to 'C'.
// Shift 'n-1' disks from 'B' to 'C'.


void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    // For seperating the rods
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    // For joining the rods
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// Driver code
int main()
{
    int n = 3;                      
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}