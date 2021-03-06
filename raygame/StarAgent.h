#pragma once
#include "Agent.h"
#include "BehaviorDecision.h"
#include "DecisionTreeBehavior.h"
#include "BooleanDecision.h"
#include "FlockingBehavior.h"
#include "SeekBehavior.h"
#include "FleeBehavior.h"
#include "AABB.h"
class StarAgent :
	public Agent
{
	public:
		StarAgent(Agent* player);
		~StarAgent();
		bool captured = false;
		AABB* DetectionRange = new AABB(100,100,this);
		void draw();
		
		void update(float deltaTime)override;
		Agent* player;
};

