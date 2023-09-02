from flask import Flask, request, render_template_string
import subprocess

app = Flask(__name__)

@app.route('/', methods=['GET', 'POST'])
def index():
    output = None

    if request.method == 'POST':
        if 'file' in request.files:
            input_file = request.files['file']
            if input_file.filename != '':
                file_content = input_file.read().decode('utf-8')

                unix_command = "python3 -m c_formatter_42"
                completed_process = subprocess.run(unix_command, shell=True, input=file_content, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

                if completed_process.returncode == 0:
                    output = completed_process.stdout.strip()
                else:
                    output = f"Error: we will fix it soon !"

    return render_template_string('''
                                <head>
                                  <title>Trotinit by Jx00001 :)</title>
                                  <link rel="stylesheet"
                                        href="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/10.0.3/styles/default.min.css">
                                  <script src="https://cdnjs.cloudflare.com/ajax/libs/highlight.js/10.0.3/highlight.min.js"></script>
                                  <script>hljs.initHighlightingOnLoad();</script>
                                  <link rel="stylesheet" href="https://www.arclab.com/en/res/arclab.css">
                                </head>
                                <body>
                                  <h1> Trotinit nadya sahla fi al isti3mal : </h1>
                                  <form method="POST" enctype="multipart/form-data">
                                      <input type="file" name="file">
                                      <input class="butt" type="submit" value="Submit">
                                  </form>
                                  {% if output %}
                                    <a class="butt butt-blue" href="#" onclick="CopyToClipboard('lcode');return false;">Copy lCode :)</a>
                                    <h3 style="text-align: center;">Output :</h3>
                                    <pre><code class="c" id="lcode">{{ output }}</code></pre>
                                  {% endif %}
                                </body>
                                <script>
                                function CopyToClipboard(id)
                                {
                                    var r = document.createRange();
                                    r.selectNode(document.getElementById(id));
                                    window.getSelection().removeAllRanges();
                                    window.getSelection().addRange(r);
                                    document.execCommand('copy');
                                    window.getSelection().removeAllRanges();
                                }
                                </script>''',
output=output)

if __name__ == '__main__':
    app.run(debug=True, port=80, host="0.0.0.0")
