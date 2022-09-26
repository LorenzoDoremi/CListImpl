#include <vector>

namespace goniometria
{

    double PI_GRECO = 3.14158234234;

    double radianti(double gradi)
    {

        return (gradi * PI_GRECO) / 180;
    }

}

namespace armi_COD
{

    class Arma
    {
    };

    class Caricatore
    {

    private:
        std::vector<Proiettile> m_proiettili;
        int m_quantity;

    public:
        void add_proiettile(Proiettile n)
        {
            m_proiettili.emplace_back(n);
        }
    };

    class Proiettile
    {

    private:
        int danno;
        int dimensioni;
        int costo;
    };

    void ricarica(Arma a, Caricatore b)
    {
    }
}
