//Example Idea: Write operator< that compares the Dim values of 2 hypercubes

template <int Dim>
Hypercube<Dim>::Hypercube(double e, string n) {
	edge = e;
	name = new string(n);
}

template <int Dim>
Hypercube<Dim>::Hypercube(Hypercube<Dim> const & other){
	copy(other);
}

template <int Dim>
Hypercube<Dim>::~Hypercube(){
	clear();
}

template <int Dim>
Hypercube<Dim> & Hypercube<Dim>::operator=(Hypercube<Dim> const & rhs){
	if(this != &rhs){
		clear();
		copy(rhs);
	}
	return *this;
}

template <int Dim>
void Hypercube<Dim>::copy(Hypercube const & other){
	edge = other.edge;
	name = new string(*(other.name));
}

template <int Dim>
void Hypercube<Dim>::clear(){
	if(name != NULL) delete name;
	name = NULL;
}

template <int Dim>
void Hypercube<Dim>::setEdge(double e) {edge = e;}

template <int Dim>
double Hypercube<Dim>::getEdge() {return edge;}

template <int Dim>
double Hypercube<Dim>::getHyperVol() {
	double ret = 1.0;
	for(int i = 0; i < Dim; i++){
		ret *= edge;
	}
	return ret;
}

template <int Dim>
int Hypercube<Dim>::getNumEdges() {return Dim * pow(2, Dim-1);}

template <int Dim>
void Hypercube<Dim>::setName(string n){
	delete name;
	name = new string(n);
}

template <int Dim>
string Hypercube<Dim>::getName() {return *name;}

