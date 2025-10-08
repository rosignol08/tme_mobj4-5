#include "Instance.h"

using namespace std;

namespace Netlist{
            //getName         ();
            const std::string& Instance::getName() const {
                return name_;
            }
            //const std::vector<Netlist::Term*>&
              //      getTerms        ();
            Cell *  getMasterCell   (){

            };
            Cell *  getCell         (){

            };
            Term *  getTerm         (const std::string&){

            };
            Point   getPosition     (){

            };
            bool    connect         (const std::string & name, Net*){

            };
            void    add             (Term *){

            };
            void    remove          (Term *){

            };
            void    Instance::setPosition     (const Point &){

            };
            void    setPosition     (int x, int y){

            };
}