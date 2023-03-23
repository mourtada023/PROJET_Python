class Et:
    """ Ci dessous : Classe permettant de construire des conjonctions de formules """
    def __init__(self,gauche,droite):
        self.gauche = gauche
        self.droite  = droite

    def f_gauche(self):
        return self.gauche

    def f_droite(self):
        return self.droite

    def to_string(self):
        return "(" + self.f_gauche().to_string() + " ∧ " + self.f_droite().to_string() + ")"

    def hauteur(self) :
        return max (self.f_droite().hauteur(), self.f_gauche().hauteur())+1

    def variables(self):
        return self.f_gauche().variables() | self.f_droite().variables()

    def eval(self,valuation):
        return ((self.f_gauche().eval(valuation)and self.f_droite().eval(valuation)))==True

    def pousse_negation(self,neg):
        return (self.f_gauche().pousse_negation(neg)) or (self.f_droite().pousse_negation(neg))

class Ou:
    """Classe pemettant de construire des disjonctions de formules"""
    def __init__(self,gauche,droite):
        self.gauche = gauche
        self.droite  = droite

    def f_gauche(self):
        return self.gauche

    def f_droite(self):
        return self.droite

    def to_string(self):
        return "(" + self.gauche.to_string() + " ∨ " + self.droite.to_string() + ")"

    def hauteur(self) :
        return max (self.f_droite().hauteur(), self.f_gauche().hauteur())+1


    def variables(self):
        return self.f_gauche().variables() | self.f_droite().variables()
    

    def eval(self,valuation):
        return ((self.f_gauche().eval(valuation) or self.f_droite().eval(valuation)))==True

    def pousse_negation(self,neg):
        return (self.f_gauche().pousse_negation(neg)) and (self.f_droite().pousse_negation(neg))



class Non:
    """Classe permettant de construire des négations de formules"""
    def __init__(self,formule):
        self.formule = formule

    def f_formule(self):
        return self.formule

    def to_string(self):
        return "¬" + self.f_formule().to_string()

    def hauteur(self) :
        return (self.f_formule().hauteur())+1

    def variables(self):
        return self.f_formule().variables()

    def eval(self,valuation):
        return not self.f_formule().eval(valuation)

    def pousse_negation(self,neg):
        return




class Vrai:
    """Classe des tautologies"""
    def __init__(self):
        return

    def to_string(self):
        return "T"

    def hauteur(self) :
        return 0

    def variables(self):
        return set()

    def eval(self,valuation):
        return True

    def pousse_negation(self,neg):
        return False


class Faux:
    """Classe des contradictions"""
    def __init__(self):
        return

    def to_string(self):
        return "⊥"

    def hauteur(self) :
        return 0

    def variables(self):
        return set()

    def eval(self,valuation):
        return False

    def pousse_negation(self,neg):
        return True



class Variable:
    """Classe permettant de construire des variables propositionnelles"""
    def __init__(self,variable):
        self.nom_variable = variable

    def nom(self):
        return self.nom_variable

    def to_string(self):
        return self.nom()

    def hauteur(self) :
        return 0

    def variables(self):
        return {self.nom()}
    
    def eval(self,valuation):
        return 

    def pousse_negation(self,neg):
        return 
