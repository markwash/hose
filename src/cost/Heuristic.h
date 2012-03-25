// Copyright 2012 <Mark Washenberger>

#ifndef SRC_COST_HEURISTIC_H_
#define SRC_COST_HEURISTIC_H_

namespace hose {
namespace cost {

class Heuristic {
  public:
  virtual int compare(double cost1, double cost2) = 0;
  virtual ~Heuristic(void) {}
};

}  // namespace cost
}  // namespace hose

#endif  // SRC_COST_HEURISTIC_H_
