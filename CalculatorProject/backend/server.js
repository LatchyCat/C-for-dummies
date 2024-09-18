const express = require('express');
const { exec } = require('child_process');
const cors = require('cors');

const app = express();
const port = 3001;

app.use(cors());
app.use(express.json());

app.post('/calculate', (req, res) => {
  const { expression, num1, num2 } = req.body;

  exec(`./calcProgram ${expression} ${num1} ${num2}`, (error, stdout, stderr) => {
    if (error) {
      console.error(`exec error: ${error}`);
      return res.status(500).json({ error: 'An error occurred' });
    }
    res.json({ result: stdout.trim() });
  });
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
