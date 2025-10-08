#include "Term.h"

using namespace std;

namespace Netlist{
    bool                    Term::isInternal      ()const{

    };
    bool                    Term::isExternal      ()const{

    };
    const std::string &   Term::getName         () const{

    };
    Node*                  Term::getNode         (){

    };
    Net*                   Term::getNet          ()const{};
    Cell*                  Term::getCell         ()const{

    };
    Cell*                  Term::getOwnerCell    ()const{

    };
    Instance*              Term::getInstance     ()const{

    };
    Point                   Term::getPosition     ()const{

    };
    void                    Term::setNet          ( Net * ){

    };
    void                    Term::setNet          ( const std::string& ){

    };
    void                    Term::setPosition     ( const Point& ){

    };
    void                    Term::setPosition     ( int x , int y ){

    };
    //Type                    getType         () const ;
    //Direction               getDirection    ();
    //void                    setDirection    ( Direction );

}