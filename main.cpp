#include <iostream>

using namespace std;

int main()
{
    float b,d,t_seg,t_min,t_horas,primeiro_calculo,segundo_calculo,segundo_calculo_quadrado,terceiro_calculo,terceiro_calculo_quadrado,quarto_calculo,quarto_calculo_cubo,quinto_calculo,sexto_calculo,sexto_calculo_quadrado,setimo_calculo;

    cout << "Informe o numero de bytes: ";
    cin >> b;

    cout << "Informe o Diferencial: ";
    cin >> d;

    primeiro_calculo = b / 0.29737;

    segundo_calculo = (0.737 * b);
    segundo_calculo_quadrado = segundo_calculo * segundo_calculo;

    terceiro_calculo = 1 - d;
    terceiro_calculo_quadrado  = terceiro_calculo * terceiro_calculo;

    quarto_calculo = 1.78 / terceiro_calculo_quadrado;
    quarto_calculo_cubo = quarto_calculo * quarto_calculo * quarto_calculo;

    quinto_calculo = quarto_calculo_cubo + segundo_calculo_quadrado;

    sexto_calculo = (1 - d) * b;
    sexto_calculo_quadrado = sexto_calculo * sexto_calculo;

    setimo_calculo = sexto_calculo_quadrado / quinto_calculo * 0.78988;

    t_seg = primeiro_calculo / setimo_calculo;
    t_min = t_seg / 60;
    t_horas = t_min / 60;

    cout << "Tempo em segundos: " << t_seg << endl;
    cout << "Tempo em minutos: " << t_min << endl;
    cout << "Tempo em horas: " << t_horas << endl;

    return 0;
}
