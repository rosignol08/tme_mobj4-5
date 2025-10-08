#ifndef INSTANCE_H
#define INSTANCE_H

#pragma once
#include "Point.h"
#include "Term.h"
#include "Cell.h"

namespace Netlist {

    class Instance{
        class Term   masterCell_;
            std::string         name_;
            std::vector<Netlist::Term*>  terms_;
            Netlist::Point               position_;
        public:
                    Instance        ( Cell* owner, Cell* model, const std::string& );
                    ~Instance       (){};
            const std::string&
                    getName         () const ;
            Cell *  getMasterCell   () const ;
            Cell *  getCell         () const ;
            const std::vector<Netlist::Term*>&
                    getTerms        () const ;
            Term *  getTerm         (const std::string&) const ;
            Point   getPosition     () const;
            bool    connect         (const std::string & name, Net*);
            void    add             (Term *);
            void    remove          (Term *);
            void    setPosition     (const Point &);
            void    setPosition     (int x, int y);
    };
}

#endif