// euclid.c - berechnet ggt

static int euclid(int, int);  //declares function 

int main () 

{
    return euclid(450000, 150000);
}

//defines the function 
int euclid(int x, int y)
{
    if(x==y) return x;
    else if(x>y) return euclid(x-y,y);
    else return euclid(y-x,x);
}
