/*
* Servlet to print data obtained from html form
*/
import java.io.IOException;
import java.io.PrintWriter;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class Login extends HttpServlet {
        
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out=response.getWriter();
    
        String e=request.getParameter("email");
        String pw=request.getParameter("password");
        
                    out.println("<!DOCTYPE html>");
                    out.println("<html>");
                    out.println("<head>");
                    out.println("<title>Form Data</title>");
                    out.println("<meta charset=\"UTF-8\">");
                    out.println("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">");                   
                    out.println("</head>");
                    out.println("<body>");        
                    out.println("<p>Email ID: </p>"+e);            
                    out.println("<p>Password: </p>"+pw);
                    out.println("</body>");
                    out.println("</html>");
                }
        } 
