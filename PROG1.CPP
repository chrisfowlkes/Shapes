#include <stdio.h>
#include <math.h>
#define pi 3.141592
#define NORMAL_EXIT 0

void heading()
{
    printf("  Please enter one of the following choices:\n\n");
    printf("  C for the area of a hollowed-out circle\n");
    printf("  T for the area of a hollowed out equilateral triangle\n");
    printf("  R for the area of a hollowed out rectangle\n");
    printf("  S for the area of a hollowed out square\n");
    printf("  P for the volume of a hollowed out sphere\n");
}

float circle(float radiuso, float radiusi)
{
    float area;
    area = (radiuso * radiuso * pi)-(radiusi * radiusi * pi);
    return area;
}

float triangle(float sideo, float sidei)
{
    float area, heighti, heighto;
    heighti = sqrt(sidei * sidei * (sidei / 2 * sidei / 2) / 2);
    heighto = sqrt(sideo * sideo * (sideo / 2 * sideo / 2) / 2);
    area = (sideo * heighto / 2)-(sidei * heighti /2);
    return area;
}

float rectangle(float lengtho, float lengthi, float widtho, float widthi)
{
    float area;
    area = (lengtho * widtho)-(lengthi * widthi);
    return area;
}

float square(float sideo, float sidei)
{
    float area;
    area = (sideo * sideo)-(sidei * sidei);
    return area;
}

float sphere(float radiuso, float radiusi)
{
    float volume;
    volume = (pi * pow(radiuso,3))-(pi * pow(radiusi,3));
    return(volume);
}

float main ()
{
    char c;
    float ans, inner, outer, winner, wouter;
    heading ();
    c = getchar();
    switch (c)
    {
    case 'C': case 'c':
    {
	printf ("Please enter the radius of the outer circle.\n");
	scanf ("%f",&outer);
	printf ("Please enter the radius of the inner circle.\n");
	scanf ("%f",&inner);
	ans =  circle(outer, inner);
	printf ("The area of the hollowed-out circle is %.5f.\n",ans);
    }
    break;
    case 'T': case 't':
    {
	printf ("Please enter the length of a side of the outer triangle.\n");
	scanf ("%f",&outer);
	printf ("Please enter the lenght of a side of the inner triangle.\n");
	scanf ("%f",&inner);
	ans =  triangle(outer, inner);
	printf ("The area of the hollowed-out triangle is %.5f.\n",ans);
    }
    break;
    case 'R': case 'r':
    {
	printf ("Please enter the length of the outer rectangle.\n");
	scanf ("%f",&outer);
	printf ("Please enter the width of the outer rectangle.\n");
	scanf ("%f",&wouter);
	printf ("Please enter the length of the inner rectangle.\n");
	scanf ("%f",&inner);
	printf ("Please enter the width of the inner rectangle.\n");
	scanf ("%f",&winner);
	ans = rectangle(outer, inner, wouter, winner);
	printf ("The area of the hollowed-out rectangle is %.5f.\n",ans);
    }
    break;
    case 'S': case 's':
    {
	printf ("Please enter the length of a side of the outer square.\n");
	scanf ("%f",&outer);
	printf ("Please enter the length of a side of the inner square.\n");
	scanf ("%f",&inner);
	ans = square(outer, inner);
	printf ("The area of the hollowed-out square is %.5f.\n",ans);
    }
    break;
    case 'P': case 'p':
    {
	printf ("Please enter the radius of the outer sphere.\n");
	scanf ("%f",&outer);
	printf ("Please enter the radius of the inner sphere.\n");
	scanf ("%f",&inner);
	ans = sphere(outer, inner);
	printf ("The volume of the hollowed-out sphere is %.5f.\n",ans);
    }
    break;
    default:
    {
	printf ("Invalid choice.");

    }
    }
    return NORMAL_EXIT;
}


