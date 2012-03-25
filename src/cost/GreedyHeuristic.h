// Copyright 2012 <Mark Washenberger>

#ifndef SRC_COST_GREEDYHEURISTIC_H_
#define SRC_COST_GREEDYHEURISTIC_H_

#include "cost/Heuristic.h"

namespace hose {
namespace cost {

class GreedyHeuristic: public hose::cost::Heuristic {
  public:
  int compare(double cost1, double cost2) {
    return cost2 < cost1 ? 1 : -1;
  }
};

}  // namespace cost
}  // namespace hose

#endif  // SRC_COST_GREEDYHEURISTIC_H_
