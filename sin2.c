    while(1)
    {
        // Ativa o GPIO.
        if(sinWithSerie(M_PI/4, 20)/(1/sqrt(2)) > 0.9999999)
            GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_2, GPIO_PIN_2);

        // Espera por periodo.
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++){}

        // Desativa o GPIO.
        GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_2, 0);

        // Espera por periodo.
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++){}
    }

