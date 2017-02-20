int main(void)
{
    // Ativa o modulo de GPIO.
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    ROM_SysCtlDelay(1);

    // Configura o pino PA1 como saida.
    ROM_GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_1);

    while(1)
    {
        // Ativa o GPIO.
        ROM_GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_1, GPIO_PIN_1);

        // Espera por um segundo.
        ROM_SysCtlDelay(1000000);

        // Desativa o GPIO.
        ROM_GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_1, 0);

        // Espera por um segundo.
        ROM_SysCtlDelay(1000000);
    }
}
