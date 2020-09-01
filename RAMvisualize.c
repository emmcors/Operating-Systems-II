int main(){
    int opc1=-1,opc2=-1;
    do{
        printf("Menu de opciones\n");
        printf("1.Crear proceso\n");
        printf("2.Eliminar proceso\n"); 
        printf("3.Visualizar RAM\n");
        printf("4.RepresentaciÃ³n RAM\n");
        printf("0.Salir\n");
        scanf("%d", opc1);
        switch (opc1)
        {
        case 1:
            /* code */
            break;

        case 2:
            break;
        case 3:
            break;
        case 4:
            do{
                printf("1.De RAM a HDD\n");
                printf("2.De HDD a RAM\n");
                printf("0.Regresar al menu principal\n");
                scanf("%d", opc2);
                switch (opc2)
                {
                case 1:
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                default:
                    break;
                }
            }while(opc2!=0);
            break;
        default:
            break;
        }
    }while(opc1!=0);
}
