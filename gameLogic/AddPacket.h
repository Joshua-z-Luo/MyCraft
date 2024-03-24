#pragma once
#include "UpdatePacket.h"
class AddPacket :
    public UpdatePacket
{
private:
	glm::vec3 targetBlock;
public:
	AddPacket(glm::vec3 targetBlock, int blockID);
	glm::vec3 conductAction() override;
};

