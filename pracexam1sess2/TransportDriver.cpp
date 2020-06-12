#include<iostream>
#include "Transport.h"
#include "Horse.h"
#include "Car.h"

int main(){
  // driver program...
  
  // set up entities
  Transport t = Transport();
  Car a = Car(123);
  Car b = Car(789);
  Horse c = Horse("Dobbin");
  Transport* d = new Horse("Monte");
  Transport* e = new Car(456); 
  
  // print out initial details
  std::cout << t.get_dist_travelled() << " " << t.get_age() << std::endl;
  std::cout << a.get_dist_travelled() << " " << a.get_age() << " " << a.get_rego() << std::endl;
  std::cout << b.get_dist_travelled() << " " << b.get_age() << "  "<< a.get_rego() << std::endl;
  std::cout << c.get_dist_travelled() << " " << c.get_age() << "  " << c.get_name() << std::endl;
  std::cout << d->get_dist_travelled() << " " << d->get_age() << "  " << ((Horse*)d)->get_name() <<std::endl;
  std::cout << e->get_dist_travelled() << " " <<  e->get_age() << "  "<< ((Car*)e)->get_rego() << std::endl;
  std::cout << "--------" << std::endl;
  

  // modify the objects
  a.drive(1000);
  b.drive(2000);
  c.ride();
  ((Horse *)d)->ride();
  ((Car*)e)->drive(200);
  

  // print thse ones.

std::cout << a.get_dist_travelled() << " " << a.get_age() << " " << a.get_rego() << std::endl;
  std::cout << b.get_dist_travelled() << " " << b.get_age() << "  "<< a.get_rego() << std::endl;
  std::cout << c.get_dist_travelled() << " " << c.get_age() << "  " << c.get_name() << std::endl;
  std::cout << d->get_dist_travelled() << " " <<  d->get_age() << "  " << ((Horse*)d)->get_name() <<std::endl;
  std::cout << e->get_dist_travelled() << " " << e->get_age() << "  "<< ((Car*)e)->get_rego() << std::endl;
  std::cout << "--------" << std::endl;

  // now for birthdays
  a.birthday();
  b.birthday();
  c.birthday();
  d->birthday();
  e->birthday();

  // print thse ones.

std::cout << a.get_dist_travelled() << " " << a.get_age() << " " << a.get_rego() << std::endl;
  std::cout << b.get_dist_travelled() << " " << b.get_age() << "  "<< a.get_rego() << std::endl;
  std::cout << c.get_dist_travelled() << " " << c.get_age() << "  " << c.get_name() << std::endl;
  std::cout << d->get_dist_travelled() << " " <<  d->get_age() << "  " << ((Horse*)d)->get_name() <<std::endl;
  std::cout << e->get_dist_travelled() << " " << e->get_age() << "  "<< ((Car*)e)->get_rego() << std::endl;
  std::cout << "--------" << std::endl;

  // alias

  delete((Car*)e);
  e=d;
  a=b;

  // print out details
  // print thse ones.

std::cout << a.get_dist_travelled() << " " << a.get_age() << " " << a.get_rego() << std::endl;
  std::cout << b.get_dist_travelled() << " " << b.get_age() << "  "<< a.get_rego() << std::endl;
  std::cout << c.get_dist_travelled() << " " << c.get_age() << "  " << c.get_name() << std::endl;
  std::cout << d->get_dist_travelled() << " " <<  d->get_age() << "  " << ((Horse*)d)->get_name() <<std::endl;
  std::cout << e->get_dist_travelled() << " " << e->get_age() << "  "<< ((Horse*)e)->get_name() << std::endl;
  std::cout << "--------" << std::endl;
  
 
  delete((Horse*)d); // clean up
 
}
  
