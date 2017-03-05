int main(void)
{
    // Ativa o modulo de GPIO.
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);

    // Espera o acesso ao periferico
    while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOG))	{}

    // Configura o pino PG2 como saida.
    GPIOPinTypeGPIOOutput(GPIO_PORTG_BASE, GPIO_PIN_2);

    while(1)
    {
        // Ativa o GPIO.
        GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_2, GPIO_PIN_2);

        // Espera por periodo.
        for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++){}

        // Desativa o GPIO.
        GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_2, 0);

        // Espera por periodo.
	for(ui32Loop = 0; ui32Loop < 200000; ui32Loop++){}
    }
}
