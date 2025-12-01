double median(double x, double y, double z)
{
    double mid;
    if (x <= y && y <= z || x >= y && z <= y)
    {
        mid = y;
    }
    if (x <= z && z <= y || x >= z && y <= z)
    {
        mid = z;
    }
    else
    {
        mid = z;
    }
    return mid;
}