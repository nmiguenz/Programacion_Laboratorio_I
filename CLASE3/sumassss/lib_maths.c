int sumaEnteros (int x, int y, int *resultado)
{
    long accesorioResultado;
    int flagRetorno = -1;
    accesorioResultado = x + y;
    if (accesorioResultado<= 32767)
    {
        *resultado = accesorioResultado;
        flagRetorno = 0;
    }
    return flagRetorno;
}

float divisionEnteros (float x, float y, float *resultado)
{
    long accesorioResultado;
    int flagRetorno = -1;
    accesorioResultado = x / y;
    if (accesorioResultado<= 32767 && y!=0)
    {
        *resultado = accesorioResultado;
        flagRetorno = 0;
    }
    return flagRetorno;
}
