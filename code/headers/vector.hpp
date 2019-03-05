/// @file

/// \brief
/// 2D integer vector ADT
/// \details
/// This is 2D vector ADT that stores its two components as (signed) integers.
/// The x and y components are private attributes. 
/// The appropriate constructors and operators are provided.


#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <ostream>

class vector
{private:
   int x;
   int y;
public:
	///\brief
	/// constructor 
	///\details 
	/// constructor that initializes the x and y values with a default of 0
   vector( int x=0, int y=0 );
   
   ///\brief
   /// get x value
   ///\details
   /// get x value and return as integer
	int x_get();
	
	///\brief
   /// get y value
   ///\details
   /// get y value and return as integer
    int y_get();
	
	///\brief
   /// set x value
   ///\details
   /// set x value to the given new_x value
    void x_set( int new_x );
	
	///\brief
   /// set y value
   ///\details
   /// set y value to the given new_y value
    void y_set( int new_y );
	
	///\brief
	/// add vector to another vector
	///\details
	///this operator+ adds a vector value to another vector value
    vector operator+( const vector& rhs ) const ;
	
	///\brief
	/// add vector into vector
	///\details
	//this operator+= multiplys a vector with another vector and stores it in the first vector
	vector &operator+=( const vector & rhs );
	
	///\brief
	///modiadic 
	///\details
	///returns the objec self 
	vector operator+() const ;
	
	///\brief
	/// multiply vector by an integer
	///\details
	///multipy a vector by an integer both x and y are multiplyed by the integer
	vector operator*(const int & rhs) const;
	
	///\brief
	/// multiply vector into a vector
	///\details
	///multipy a vector by another vector and stores it in the first vector
	vector &operator*=(const int & rhs);
	
	///\brief
	///compare 2 vectors
	///\details
	/// returns true when vectors are the same
	///returns false when not equal
	bool operator==(const vector & rhs)const;
	
	///\brief
	///output operator for a vector value
	///\details
	///outputs in the format [x/y]
	friend std::ostream &operator<<( std::ostream & lhs, const vector & rhs );
	
};

///\brief
/// multipyes int by a vector 
///\details
/// multiplyes an integer value by an vector and returns a vector
vector operator*(const int & lhs, const vector & rhs);
#endif // VECTOR_HPP
