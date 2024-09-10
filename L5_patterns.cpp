/* without comments
#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}
void print2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "* ";
		cout << "\n";
	}
}
void print3(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << j + 1 << " ";
		cout << "\n";
	}
}
void print4(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << i + 1 << " ";
		}
		cout << "\n";
	}
}
void print5(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << "* ";
		}
		cout << "\n";
	}
}
void print6(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
}
void print7(int n)
{
	for (int i = 1; i <= n; i++)
	{
		// spaces
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		// stars
		for (int j = 1; j <= (2 * i - 1); j++)
			cout << "*";
		// spaces
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		// new line
		cout << "\n";
	}
}
void print8(int n)
{
	for (int i = 1; i <= n; i++)
	{
		// spaces
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		// stars
		for (int j = 1; j <= (2 * n) - (2 * i - 1); j++)
			cout << "*";
		// spaces
		for (int j = 1; j < i - 1; j++)
			cout << " ";
		// new line
		cout << "\n";
	}
}
void print10Approach1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << "\n";
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << "*";
		cout << "\n";
	}
}
void print10Approach2(int n)
{
	for (int i = 1; i <= (2 * n - 1); i++)
	{
		int stars = i;
		if (i > n)
			stars = 2 * n - i;
		for (int j = 1; j <= stars; j++)
			cout << "*";
		cout << "\n";
	}
}
void print11(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int print = 1;
		if (i % 2 == 0)
			print = 0;
		for (int j = 1; j <= i; j++)
		{
			cout << print << " ";
			print = (!print);
		}
		cout << "\n";
	}
}
void print12(int n)
{
	for (int i = 1; i <= n; i++)
	{
		// numbers
		for (int j = 1; j <= i; j++)
			cout << j;
		// spaces
		for (int j = 1; j <= (2 * n - 2 * i); j++)
			cout << " ";
		// numbers
		for (int j = i; j >= 1; j--)
			cout << j;
		// new line
		cout << "\n";
	}
}
void print13(int n)
{
	int count = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << count << " ";
			count++;
		}
		cout << "\n";
	}
}
void print14(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (char ch = 'A'; ch < 'A' + i; ch++)
		{
			cout << ch << " ";
		}
		cout << "\n";
	}
}
void print15(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (char ch = 'A'; ch < 'A' + (n - i + 1); ch++)
			cout << ch << " ";
		cout << "\n";
	}
}
void print16(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			char ch = 'A' + i;
			cout << ch << " ";
		}
		cout << "\n";
	}
}
void print17(int n)
{
	for (int i = 1; i <= n; i++)
	{
		// spaces
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		// characters
		char ch = 'A';
		for (int j = 1; j <= (2 * i) - 1; j++)
		{
			cout << ch;
			if (j <= n)
				ch++;
			else
				ch--;
		}
		// spaces
		for (int j = 1; j <= n - i; j++)
			cout << " ";

		cout << "\n";
	}
}
void print18(int n)
{
	int startingChar = 'A' + n;
	for (int i = 1; i <= n; i++)
	{
		for (char ch = startingChar - i; ch < startingChar; ch++)
			cout << ch << " ";
		cout << "\n";
	}
}
void print19(int n)
{

	for (int i = 1; i <= 2 * n; i++)
	{
		int stars = n - i + 1;
		if (i > n)
			stars = i - n;
		int spaces = (2 * i) - 2;
		if (i > n)
			spaces = (2 * n - (i - n) * 2);
		for (int j = 1; j <= stars; j++)
			cout << "*";
		for (int j = 1; j <= spaces; j++)
			cout << " ";
		for (int j = 1; j <= stars; j++)
			cout << "*";
		cout << "\n";
	}
}
void print20(int n)
{
	 int spaces=2*n-2;
	 for(int i=1;i<=2*n-1;i++)
	 {
		int stars=i;
		if(i>n) stars=2*n-i;

		//stars
		for(int j=1;j<=stars;j++) cout<<"*";
		//spaces
		for(int j=1;j<=spaces;j++) cout<<" ";
		//stars
		for(int j=1;j<=stars;j++) cout<<"*";
		cout<<"\n";
		if(i>=n) spaces+=2;
		else spaces-=2;
	 }


}
void print21(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0 || i==n-1 || j==n-1) cout<<"*";
			else cout<<" ";
			
		}
		
cout<<"\n";
	}
}
void print22(int n)
{
	for(int i=0;i<(2*n-1);i++)
	{
		for(int j=0;j<(2*n-1);j++)
		{
			int top=i;
			int left=j;
			int right=(2*n-2)-j;
			int down=(2*n-2)-i;
			cout<<n-min(min(left,right),min(top,down));
		}
		cout<<"\n";
	}
}
int main()
{
	int n;
	cout << "Enter n:\n";
	cin >> n;
	print22(n);
}*/

/*with comments*/
#include <bits/stdc++.h> // Standard library header for competitive programming
using namespace std;      // Enables using all elements of std namespace

// Function to print a square pattern of stars
void print1(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for the rows
    {
        for (int j = 0; j < n; j++) // Inner loop for the columns
        {
            cout << "* "; // Print star followed by a space
        }
        cout << "\n"; // Move to the next line after each row
    }
}

// Function to print a right-angled triangle of stars
void print2(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 0; j <= i; j++) // Inner loop for printing stars
            cout << "* "; // Print stars in increasing order
        cout << "\n"; // Move to next line after each row
    }
}

// Function to print numbers in a right-angled triangle
void print3(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 0; j <= i; j++) // Inner loop for printing numbers
            cout << j + 1 << " "; // Print increasing numbers starting from 1
        cout << "\n"; // New line after each row
    }
}

// Function to print repeated numbers in a right-angled triangle
void print4(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 0; j <= i; j++) // Inner loop for printing repeated numbers
        {
            cout << i + 1 << " "; // Print the row number repeatedly
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print inverted right-angled triangle of stars
void print5(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = n - i; j > 0; j--) // Inner loop for printing stars
        {
            cout << "* "; // Print stars in decreasing order
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print decreasing numbers in an inverted triangle
void print6(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 1; j <= n - i; j++) // Inner loop for printing decreasing numbers
        {
            cout << j << " "; // Print numbers starting from 1
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print a pyramid of stars
void print7(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        // Print leading spaces for center alignment
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Print increasing stars in pyramid form
        for (int j = 1; j <= (2 * i - 1); j++)
            cout << "*";
        // Print trailing spaces (optional for symmetry)
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // New line after each row
        cout << "\n";
    }
}

// Function to print an inverted pyramid of stars
void print8(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        // Print leading spaces for center alignment
        for (int j = 0; j < i - 1; j++)
            cout << " ";
        // Print decreasing stars in inverted pyramid form
        for (int j = 1; j <= (2 * n) - (2 * i - 1); j++)
            cout << "*";
        // New line after each row
        cout << "\n";
    }
}

// Function to print a diamond shape of stars using two parts
void print10Approach1(int n)
{
    // Upper part (triangle)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << "*"; // Print increasing stars
        cout << "\n";
    }

    // Lower part (inverted triangle)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << "*"; // Print decreasing stars
        cout << "\n";
    }
}

// Function to print a diamond shape of stars in one pass
void print10Approach2(int n)
{
    for (int i = 1; i <= (2 * n - 1); i++) // Loop for both upper and lower parts
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i; // Adjust stars count after mid-point
        for (int j = 1; j <= stars; j++)
            cout << "*"; // Print stars
        cout << "\n"; // New line after each row
    }
}

// Function to print 1's and 0's alternately in a right-angled triangle
void print11(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        int print = 1;
        if (i % 2 == 0)
            print = 0; // Start with 0 for even rows
        for (int j = 1; j <= i; j++)
        {
            cout << print << " "; // Print alternating 1's and 0's
            print = (!print); // Toggle between 1 and 0
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print numbers and their reverse with spaces in between
void print12(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        // Print increasing numbers
        for (int j = 1; j <= i; j++)
            cout << j;
        // Print spaces
        for (int j = 1; j <= (2 * n - 2 * i); j++)
            cout << " ";
        // Print decreasing numbers
        for (int j = i; j >= 1; j--)
            cout << j;
        cout << "\n"; // New line after each row
    }
}

// Function to print a continuous increasing count in a triangle
void print13(int n)
{
    int count = 1; // Initialize the counter
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        for (int j = 1; j <= i; j++) // Inner loop for columns
        {
            cout << count << " "; // Print current count
            count++; // Increment the counter
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print a triangle of alphabetic characters
void print14(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        for (char ch = 'A'; ch < 'A' + i; ch++) // Print characters in each row
        {
            cout << ch << " ";
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print decreasing triangle of alphabetic characters
void print15(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        for (char ch = 'A'; ch < 'A' + (n - i + 1); ch++) // Print decreasing characters
            cout << ch << " ";
        cout << "\n"; // New line after each row
    }
}

// Function to print repeated characters in a triangle
void print16(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 0; j <= i; j++) // Inner loop for columns
        {
            char ch = 'A' + i; // Determine character based on row
            cout << ch << " ";
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print a pyramid with increasing and decreasing alphabetic characters
void print17(int n)
{
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        // Print leading spaces for center alignment
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Print increasing characters
        char ch = 'A';
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << ch;
            if (j < i)
                ch++; // Increment character before midpoint
            else
                ch--; // Decrement character after midpoint
        }
        cout << "\n"; // New line after each row
	}}
// Function to print a triangle with decreasing characters in each row
void print18(int n)
{
    int startingChar = 'A' + n; // Starting character based on row number
    for (int i = 1; i <= n; i++) // Outer loop for rows
    {
        for (char ch = startingChar - i; ch < startingChar; ch++) // Print characters in increasing order
            cout << ch << " ";
        cout << "\n"; // New line after each row
    }
}

// Function to print an hourglass pattern with stars and spaces
void print19(int n)
{
    for (int i = 1; i <= 2 * n; i++) // Outer loop for both upper and lower parts
    {
        int stars = n - i + 1; // Number of stars to print
        if (i > n)
            stars = i - n; // Adjust stars for lower part

        int spaces = (2 * i) - 2; // Calculate spaces
        if (i > n)
            spaces = (2 * n - (i - n) * 2); // Adjust spaces after midpoint

        // Print stars
        for (int j = 1; j <= stars; j++)
            cout << "*";
        // Print spaces
        for (int j = 1; j <= spaces; j++)
            cout << " ";
        // Print stars again
        for (int j = 1; j <= stars; j++)
            cout << "*";
        cout << "\n"; // New line after each row
    }
}

// Function to print an hourglass pattern with increasing and decreasing stars
void print20(int n)
{
    int spaces = 2 * n - 2; // Initial number of spaces
    for (int i = 1; i <= 2 * n - 1; i++) // Outer loop for rows
    {
        int stars = i; // Number of stars to print
        if (i > n)
            stars = 2 * n - i; // Adjust stars after midpoint

        // Print stars
        for (int j = 1; j <= stars; j++)
            cout << "*";
        // Print spaces
        for (int j = 1; j <= spaces; j++)
            cout << " ";
        // Print stars again
        for (int j = 1; j <= stars; j++)
            cout << "*";
        cout << "\n"; // New line after each row

        // Adjust spaces
        if (i >= n)
            spaces += 2;
        else
            spaces -= 2;
    }
}

// Function to print a hollow square pattern of stars
void print21(int n)
{
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 0; j < n; j++) // Inner loop for columns
        {
            // Print stars at the boundary of the square
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " "; // Print spaces inside the square
        }
        cout << "\n"; // New line after each row
    }
}

// Function to print concentric squares with numbers
void print22(int n)
{
    for (int i = 0; i < (2 * n - 1); i++) // Outer loop for rows
    {
        for (int j = 0; j < (2 * n - 1); j++) // Inner loop for columns
        {
            // Calculate the minimum distance from the edges to the current position
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            // Print the number based on the minimum distance
            cout << n - min(min(left, right), min(top, down));
        }
        cout << "\n"; // New line after each row
    }
}

// Main function to drive the program
int main()
{
    int n; // Variable to store the number of rows/columns
    cout << "Enter n:\n";
    cin >> n; // Input the value of n
    print22(n); // Call the desired function to print the pattern
}
