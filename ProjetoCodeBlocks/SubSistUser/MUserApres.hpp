#pragma once

#include "interfaces.hpp"

using namespace std;


class CntrUserApres : public IUserApres
{
    private:
        IUserServ * cntrUserServ;

    public:

        void setCntrUserServ (IUserServ * cntrUserServ)
        {
            this->cntrUserServ = cntrUserServ;
        }
        void cadastrar();
        bool excluir(Email * email);
};



class TelaDadosUsuario
{
    private:
        const static int MAX_TENTATIVAS = 3;

    public:
        bool run(Usuario * usuario);
};



class TelaDadosConta
{
    private:
        const static int MAX_TENTATIVAS = 3;

    public:
        bool run(Conta * conta);
        bool novaConta(Conta * conta);
};