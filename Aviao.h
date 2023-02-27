#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

    class Aviao {

    public:

        int vel = 0;
        int velmax;
        std :: string tipo;
        Aviao(int tp);
        void imprimir();
    private:


    };

    Aviao :: Aviao(int tp) {
        if(tp == 1){
            tipo = "jato";
            velmax = 800;
        }
        else if (tp == 2) {
            tipo = "MonoMotor";
            velmax = 250;
        }
        else if (tp == 3){
            tipo = "Planador";
           velmax = 150;
        }
    }

    void Aviao :: imprimir()
    {
       std :: cout << "Tipo:.. " << tipo << std :: endl;
       std :: cout << "Velocidade:.. " << velmax << std :: endl;
       std :: cout << "Velocidade atual:... " << vel << std :: endl;
       std :: cout << "--------------------------- " << std :: endl;

    }



#endif // AVIAO_H_INCLUDED
