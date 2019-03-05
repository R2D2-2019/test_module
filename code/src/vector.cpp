#include "vector.hpp"

vector::vector(int x, int y ):
x( x ), y( y )
{}


int vector::x_get(){ return x; }
int vector::y_get(){ return y; }
void vector::x_set( int new_x ){ x = new_x; }
void vector::y_set( int new_y ){ y = new_y; }


vector vector::operator+( const vector& rhs ) const {
	return vector( x + rhs.x, y + rhs.y );
}

vector vector::operator+() const {
      return vector( x, y );
   }

vector & vector::operator+=( const vector & rhs ){
   x += rhs.x;
   y += rhs.y;
   return *this;
}

vector vector::operator*(const int & rhs) const{
	vector temp = *this;
	return vector( temp.x_get()* rhs, temp.y_get() * rhs);
}

vector  &vector::operator*=(const int & rhs){
	x*=rhs;
	y*=rhs;
	return *this;
}



bool vector::operator==(const vector & rhs)const{
	return (x == rhs.x && y == rhs.y);
}

std::ostream &operator<<(std::ostream & lhs, const vector & rhs ){
	return lhs
			<< "[" 
         << rhs.x
         << "/" 
         << rhs.y
         << "]";
}

vector operator*(const int & lhs, const vector & rhs){
	vector temp = rhs;
	return vector(temp.x_get() * lhs, temp.y_get() * lhs);
}