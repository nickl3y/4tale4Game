
#include "Tale4GameGameMode.h"
#include "Tale4GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATale4GameGameMode::ATale4GameGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
