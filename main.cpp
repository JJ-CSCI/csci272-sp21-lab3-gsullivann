//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {  
double p, q, r, s;
public:

Quaternion(){
  p = 0.0;
  q = 0.0;
  r = 0.0;
  s = 0.0;
}

Quaternion(double p, double q, double r, double s){
  this->p = p; 
  this->q = q;
  this->r = r;
  this->s = s; 
  } 

bool operator == (const Quaternion& q){
  if ((q.p == this->p) && (q.q == this->q) && (q.r == this->r) && (q.s == this->s)){
    return true;
  }
  else {
    return false;
  }
}

Quaternion operator + (const Quaternion& q){
  Quaternion r;
  r.q = q.p + this->p;
  r.q = q.q + this->q;
  r.q = q.r + this->r;
  r.q = q.s + this->s;

  return r;
}

Quaternion operator - (const Quaternion& q){
  Quaternion r;
  r.q = q.p - this->p;
  r.q = q.q - this->q;
  r.q = q.r - this->r;
  r.q = q.s - this->s;

  return r;
}

Quaternion operator * (double q){
  Quaternion r;
  r.q = q * this->p;
  r.q = q * this->q;
  r.q = q * this->r;
  r.q = q * this->s;

  return r;
}
};
//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
