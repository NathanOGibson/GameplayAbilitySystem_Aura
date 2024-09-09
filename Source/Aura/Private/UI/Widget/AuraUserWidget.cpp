// Copyright CrunchyHuman


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
	UE_LOG(LogTemp, Warning, TEXT("WidgetControllerSet"));
}