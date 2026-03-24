// MyActor02.cpp


#include "MyActor02.h"


AMyActor02::AMyActor02()
{
	PrimaryActorTick.bCanEverTick = true;
}
void AMyActor02::BeginPlay()
{
	Super::BeginPlay();
}
void AMyActor02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
//Refectoring...
