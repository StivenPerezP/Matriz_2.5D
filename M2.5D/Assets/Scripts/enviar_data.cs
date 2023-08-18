using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enviar_data : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void enviarCaracter(string A)
    {
        SerialManagerScript.SendInfo(A);
    }

    public void salir()
    {
        Application.Quit();
        Debug.Log("Cerrado");
    }
}
