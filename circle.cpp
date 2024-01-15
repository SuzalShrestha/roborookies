#include <iostream>
#include <cmath>
using namespace std;

void drawCircle(int radius)
{
    int diameter = 2 * radius;
    int center = radius;
    for (int y = 0; y <= diameter; y++)
    {
        for (int x = 0; x <= diameter; x++)
        {
            // Calculate distance from center
            int dist = sqrt((center - x) * (center - x) + (center - y) * (center - y));
            if (dist <= radius)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    drawCircle(radius);
    return 0;
}
