// Copyright 2012 <Mark Washenberger>

#ifndef SRC_COST_ANNEALINGHEURISTIC_H_
#define SRC_COST_ANNEALINGHEURISTIC_H_

#include <cmath>

#include "cost/Heuristic.h"

namespace hose {
namespace cost {

template <class RNG>
class AnnealingHeuristic: public hose::cost::Heuristic {
  public:
  AnnealingHeuristic(RNG *rng, double temperature):
    rng(rng),
    temperature(temperature)
    {}

  double getTemp(void) { return temperature; }
  void setTemp(double temperature) { this->temperature = temperature; }

  int compare(double cost1, double cost2);

  private:
  RNG *rng;
  double temperature;
};

template <class RNG>
int AnnealingHeuristic<RNG>::compare(double cost1, double cost2) {
  if (cost2 < cost1)
    return 1;
  else if (exp((cost1 - cost2)/temperature) > (*rng)())
    return 1;
  else
    return -1;
}

}  // namespace cost
}  // namespace hose

#endif  // SRC_COST_ANNEALINGHEURISTIC_H_
