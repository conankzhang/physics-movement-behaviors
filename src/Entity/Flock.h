#pragma once

#include "Behavior/Behavior.h"

#include <vector>

class CBoid;

//=======================================================================================================================
class CFlock
{
public:
	CFlock(int InFlockCount, const std::vector<SWeightedBehavior>& InWeightedBehaviors);
	~CFlock();

	void Update(float DeltaTime);
	void Draw() const;

	const std::vector<CBoid *>* GetBoids() const { return &Boids; }

private:
	SBehaviorOutput GetBehaviorOutput(const CBoid& InBoid);

	std::vector<CBoid *> Boids;
	const std::vector<SWeightedBehavior>& WeightedBehaviors;
};
