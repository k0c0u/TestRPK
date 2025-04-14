

#include "World/InteractableActor.h"


AInteractableActor::AInteractableActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void AInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
